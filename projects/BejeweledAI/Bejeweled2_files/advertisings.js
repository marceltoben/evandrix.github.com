/**
 * Funktion zum setzen des Wallpapers
 *
 * zugehörige Parameter: mf_wall_x, mf_wall_y, mf_wall_center, mf_wall_activated, mf_top_size
 */
var mf_wall_x = 363;
var mf_wall_y = 0;
var mf_wall_center = true;
var mf_wall_activated = false;
var mf_top_size = 0;

function mf_wall_init(mf_topAd, mf_rightAd){
	mf_top_size = mf_topAd;
	mf_wall_activated = true;
}

/**
 * Funktion zum setzen des Super Leaderboards
 *
 * zugehörige Parameter: mf_super_activated
 */
var mf_super_activated = false;

function mf_super_init() {
	mf_adv_ctemp = eId('app_advertising_leaderboard_ph');
	if (!mf_adv_ctemp){
		return false;
	}	
	mf_adv_ctemp.className = "superSize";
	mf_super_activated = true;
	return true;
}

/**
 * Funktion, die einen Werbungscontainer in das aktivierungsScript mit aufnimmt!
 *
 * Zugehörige globale Variable: readyAdvertisingsToLoad
 */
var readyAdvertisingsToLoad = new Array();

function app_setAdvertisingToLoad(advType){
	readyAdvertisingsToLoad[readyAdvertisingsToLoad.length] = advType;
	return true;
}

/**
 * Funktion, die die Werbungs Container aktiviert und der Reihe nach positioniert
 *
 */
function app_activateAdvertisingContainers(){
	/** Prüfe die Fenstergröße für Skyscraper links/rechts **/
	app_checkWindowSizeForAdvertising();
	
	for (cP=0;cP<readyAdvertisingsToLoad.length;cP++){
		switch(readyAdvertisingsToLoad[cP]){
			case 'app_advertising_skyscraper_right':
				app_reposAdvertisingRightSkyscraperContainer(true);
			break;
			case 'app_advertising_skyscraper_left':
				app_reposAdvertisingLeftSkyscraperContainer(true);
			break;
			case 'app_advertising_leaderboard':
				app_reposAdvertisingLeaderboardContainer(true);
			break;
			case 'app_advertising_rectangle':
				/** Positionierung der WerbungsContainer + Aktivierung **/				
				app_reposAdvertisingPhContainer(readyAdvertisingsToLoad[cP],true);
			break;
			case 'app_advertising_pregame':
				app_reposAdvertisingPregameContainer();
				app_handlePregameAdvertising();
			break;
			default:
				/** unknown containerType - do nothing **/
			break;
		}
	}
}

/**
 * Funktion, die die Fenstergröße für Skyscraper links/rechts prüft
 *
 */
function app_checkWindowSizeForAdvertising(){
	if (window.innerWidth < advertisingWindowSizeX){
		elAdvRight = eId("app_advertising_skyscraper_right");
		elAdvLeft = eId("app_advertising_skyscraper_left");

		if (elAdvRight){
			elAdvRight.parentNode.removeChild(elAdvRight);
		}

		if (elAdvLeft){
			elAdvLeft.parentNode.removeChild(elAdvLeft);
		}
		eId("content_container").className = "";
		eId("precontent_container").className = "";
	}else if (advertisingWindowShift == "1" || advertisingWindowShift == true || advertisingWindowShift == 1){
		eId("content_container").className = "contentFloated";
		eId("precontent_container").className = "precontentWide";
	}
}

/**
 * Funktion, die einen bestimmten WerbungsContainer neupositioniert und ggf. aktiviert
 *
 */
function app_reposAdvertisingPhContainer(advContainerKey,activateContainer){
	advContainerPhObj = eId(advContainerKey);
	placeholderContainerPhObj = eId(advContainerKey+"_ph");

	if ((!advContainerPhObj) || (!placeholderContainerPhObj)){
		return false;
	}
	
	leftOffset = getElementX(placeholderContainerPhObj);
	topOffset = getElementY(placeholderContainerPhObj);
	advContainerPhObj.style.left = leftOffset+"px";
	advContainerPhObj.style.top = topOffset+"px";
	
	if (activateContainer && advContainerPhObj.style.display == "none"){
		advContainerPhObj.style.display = "block";
	}
}

/**
 * Funktion zum anzeigen der Werbung "Skyscaper Rechts"
 *
 */
function app_reposAdvertisingRightSkyscraperContainer(activateContainer){
	advContainerObj = eId("app_advertising_skyscraper_right");
	contentContainer = eId("content_container");

	if (!advContainerObj){
		return true;
	}
	
	leftOffsetValue = contentContainer.offsetLeft;
	topOffsetValue = contentContainer.offsetTop;	
	if (leftOffsetValue == 0 || leftOffsetValue == undefined){
		leftOffsetValue = contentContainer.parentNode.offsetLeft;
	}
	if (topOffsetValue == 0 || topOffsetValue == undefined){
		topOffsetValue = contentContainer.parentNode.offsetTop;
	}	

	newPosX = leftOffsetValue+contentContainer.offsetWidth+10;
	newPosY = topOffsetValue+10;
	
	advContainerObj.style.top = newPosY+"px";
	advContainerObj.style.left = newPosX+"px";

	if (activateContainer && advContainerObj.style.display == "none" && (!mf_wall_activated)){
		advContainerObj.className = "app_advertising_skyscraper";
		advContainerObj.style.display = "block";
	}else if(mf_wall_activated){
		advContainerObj.innerHTML = "";
		advContainerObj.parentNode.removeChild(advContainerObj);
	}
}

/**
 * Funktion zum anzeigen der Werbung "Skyscaper Links"
 *
 */
function app_reposAdvertisingLeftSkyscraperContainer(activateContainer){
	advContainer = eId("app_advertising_skyscraper_left");
	contentContainer = eId("content_container");

	if (!advContainer){
		return true;
	}
	
	leftOffsetValue = contentContainer.offsetLeft;
	topOffsetValue = contentContainer.offsetTop;	
	if (leftOffsetValue == 0 || leftOffsetValue == undefined){
		leftOffsetValue = contentContainer.parentNode.offsetLeft;
	}
	if (topOffsetValue == 0 || topOffsetValue == undefined){
		topOffsetValue = contentContainer.parentNode.offsetTop;
	}

	newPosX = leftOffsetValue-180;
	newPosY = topOffsetValue;

	advContainer.style.top = newPosY+"px";
	advContainer.style.left = newPosX+"px";

	if (activateContainer && advContainer.style.display == "none"){
		advContainer.className = "app_advertising_skyscraper";
		advContainer.style.display = "block";
	}
}

/**
 * Funktion zum anzeigen der Werbung "Pregame"
 *
 */
function app_reposAdvertisingPregameContainer(){
	advContainer = eId("app_advertising_pregame");
	advInnerContainer = eId("app_advertising_pregame_content");
	placeholderContainer = eId("app_advertising_pregame_ph");
	gameContainer = eId("game_content");
	elOverlayContainer = eId("game_overlay_container");
	
	if ((!advContainer)){
		gameContainer = eId("game_content");
		gameContainer.style.height = currentGamesizeHeight+"px";
		gameContainer.style.width = currentGamesizeWidth+"px";
		gameContainer.style.clear = "both";
		gameContainer.style.float = "none";
		gameContainer.style.opacity = 0;
		gameContainer.style.overflow = "hidden";
		$("app_advertising_pregame_ph").style.display = "none";
		Effect.Appear('game_content', { duration: 1 ,from:0, to:1});
		resizeGameArea();
		app_reposAllAdvertisingContainers();
		return false;
	}

	leftOffset = getElementX(placeholderContainer);
	topOffset = getElementY(placeholderContainer);
	advContainer.style.left = leftOffset+"px";
	advContainer.style.top = topOffset+"px";
	
	if (advContainer.style.display == "none"){
		advContainer.style.display = "block";
		placeholderContainer.style.height = (advContainer.offsetHeight-1)+"px";
	}
		
	/* now set gameContainer */
	gameContainer.style.width = "1px";
	gameContainer.style.height = "1px";
		
	/* set fixed height for PregameAdvertisingContainer */
	if ((advContainer.offsetHeight+20) < elOverlayContainer.offsetHeight){
		advContainer.style.height = (elOverlayContainer.offsetHeight-20)+"px";
	}
	
	resizeGameArea();

	/** neupositionierung aller WerbungsContainer **/
	app_reposAllAdvertisingContainers();
}

/**
 * Funktion zum abschalen der Werbung "Pregame" und anzeigen des Spiels
 *
 */
function app_showGame(){
	if (pregameTimer){
		clearInterval(pregameTimer);
		pregameTimer = false;
	}

	gameContainer = eId("game_content");
	gameContainer.style.height = currentGamesizeHeight+"px";
	gameContainer.style.width = currentGamesizeWidth+"px";
	gameContainer.style.clear = "both";
	gameContainer.style.float = "none";
	gameContainer.style.opacity = 0;
	gameContainer.style.overflow = "hidden";
	gameContainer.style.display = "";
	
	advPhContainer = eId("app_advertising_pregame_ph");
	if (advPhContainer){		
		advPhContainer.style.display = "none";
	}	
	Effect.Fade('app_advertising_pregame', { duration: 1,afterFinish: resizeGameArea()});
	Effect.Appear('game_content', { duration: 1 ,from:0, to:1});
	
	/** neupositionierung aller WerbungsContainer **/
	app_reposAllAdvertisingContainers();
}

/**
 * Funktion und Variablen, die den Countdown (Prozentsatz + Slider) der Werbung "Pregame" aktiviert
 *
 * zugehörige Parameter: pregameTimer , currentPregameTimerPositionCounter
 */
var pregameTimer = false;
var currentPregameTimerPositionCounter = 0;

function app_handlePregameAdvertising(){
	maxContainerSize = 300;
	if (!pregameTimer){
			/* check movie-length, if existing */
		app_renewPregameTimer("hi_media");
			/* set pregameTimer */
		pregameTimer = setInterval('app_handlePregameAdvertising()',1000);
		currentPregameTimerPositionCounter = -1;
	}

	if (currentPregameTimerPositionCounter > 0 && currentPregameTimerPositionCounter < (pregameAdvTimer+1)){
		currentContainerSize = Math.round(currentPregameTimerPositionCounter*(maxContainerSize/pregameAdvTimer));
		eId("pregame_slider").style.width = Math.round(currentContainerSize)+"px";
		eId("pregame_slider_text").innerHTML = Math.round((currentContainerSize/maxContainerSize)*100)+" %";
	}else if(currentPregameTimerPositionCounter >= (pregameAdvTimer+1)){
		app_showGame();
	}

	currentPregameTimerPositionCounter++;
}

/**
 * Funktion zum erneuern des Pregame Timers
 *
 */
function app_renewPregameTimer(pregameManType){
	elObjPregameContainer = eId("app_advertising_pregame_content");
	/* abbrechen, wenn Container nicht existiert */
	if (!elObjPregameContainer){
		return false;
	}
	switch (pregameManType){
		case "hi_media":	
			/** dieser Bereich überpüft die aktuelle Video länge und setzt den pregame-timer entsprechend **/
			
			/* hole id des werbecontainers */
			elChildNodes = elObjPregameContainer.childNodes;
			elTheNodeId = null;
			for(i=0;i<elChildNodes.length;i++){
				if (elChildNodes[i].nodeName.toLowerCase() == "div"){
					elTheNodeId = elChildNodes[i].id;
					break;
				}
			}
			/* abbrechen, wenn NodeContainerId nicht existiert */
			if (!elTheNodeId){
				return false;
			}

			/* abbrechen, wenn VideoVar nicht existiert */
			if ((typeof mf_videoAdVars == 'undefined') || (typeof mf_videoAdVars[elTheNodeId] == 'undefined')){
				return false;
			}

			/* hole die Video Länge */
			pregameAdvTimer = mf_videoAdVars[elTheNodeId].videoLenght;
			
			objGameContentContainer = eId('game_content');
			objGameContentContainer.style.display = "none";
		break;
		default:
			return false;
		break;
	}
}

/**
 * Funktion zum neu positionieren aller ADV-Container
 *
 */
function app_reposAllAdvertisingContainers(){
	app_toggleResizeInUse(true);
	for (cP=0;cP<readyAdvertisingsToLoad.length;cP++){
		switch(readyAdvertisingsToLoad[cP]){
			case 'app_advertising_skyscraper_right':
				app_reposAdvertisingRightSkyscraperContainer(false);
			break;
			case 'app_advertising_skyscraper_left':
				app_reposAdvertisingLeftSkyscraperContainer(false);
			break;
			case 'app_advertising_leaderboard':
				app_reposAdvertisingLeaderboardContainer(false);
			break;
			case 'app_advertising_rectangle':
				/** Positionierung der WerbungsContainer + Aktivierung **/
				app_reposAdvertisingPhContainer(readyAdvertisingsToLoad[cP],false);
			break;
			default:
				/** unknown containerType - do nothing **/
			break;
		}
	}
	app_toggleResizeInUse(false);
}

/**
 * Funktion zum "ausser Kraft setzen" der AutoPositionierung der Werbungscontainer
 *
 */
function app_toggleResizeInUse(resizeStatus){
	app_resizeInUse = resizeStatus;
	return true;
}

/**
 * Funktion zum setzen des Cookies für die Fenstergröße für die Skyscraper Rechts/Links
 *
 */
function app_handleAdvCookie(){
	/** keine Fenstergröße gesetzt **/
	winSize = 0;
	if (window.innerWidth){
		winSize = window.innerWidth;
	}
	else if (document.body && document.body.offsetWidth){
		winSize = document.body.offsetWidth;
	}
	
	/** erste Bedingung: Größe null oder noch nicht festgelegt :: zweite Bedingung: Fenstergröße hat sich während der Sitzung verändert **/
	if ((advertisingWindowSize == "" || advertisingWindowSize == 0) || advertisingWindowSize != winSize){
		new Ajax.Request("/home/remote_set_windowsize/"+winSize);
	}
}

/****************************
 * AutoAdvRepositioning		*
 ****************************
 * Funktionsbibliothek zum Automatischen/Neusetzen der Werbung
 *
 * (c) millepondo services
 * 2010-06-22
 *
 */

/** Werbung neupositionieren, wenn sich die Fenstergröße (LIVE) verändert! **/
var app_resizeInUse = false;
window.onresize = function(event) {
	if (!app_resizeInUse){
		app_reposAllAdvertisingContainers();
	}
}

/** Setzen/überprüfen des Cookies nach Laden des Fensters **/
window.onload = function(){
	app_handleAdvCookie();
	app_activateAdvertisingContainers();
	
	/** DOM - Beobachter für das überprüfen der Werbecontainer **/
	dom_leaderboardFunction = "eId('app_advertising_leaderboard_ph').style.height=observedValue+'px'; app_reposAllAdvertisingContainers();";
	app_observeContainer("app_advertising_leaderboard","offsetHeight",dom_leaderboardFunction,true);
}

/**
 * Funktion, die den LeaderboardContainer neupositioniert und ggf. aktiviert
 * abhängig, ob ein wallpaper aktiviert ist
 *
 */
function app_reposAdvertisingLeaderboardContainer(activateContainer){
	advContainerKey = "app_advertising_leaderboard";
				
	advContainerPhObj = eId(advContainerKey);
	placeholderContainerPhObj = eId(advContainerKey+"_ph");

	if ((!advContainerPhObj) || (!placeholderContainerPhObj)){
		return false;
	}
	
	if(mf_wall_activated){
		cContainerObj = eId('content_container');
		advContainerPhObj = eId('app_advertising_leaderboard');

		cContainerObj.style.paddingTop = mf_top_size - 12 + 'px';				
		leftOffset = (getElementX(cContainerObj)+cContainerObj.offsetWidth)-728;
		advContainerPhObj.style.left = leftOffset+"px";
		advContainerPhObj.style.top = "0px";
		
		placeholderContainerPhObj.innerHTML = "<a href='http://blog.spielaffe.de' target='_blank'><img src='http://cdn.kaisergames.de/www.spielaffe.de/images/alt_adv_leaderboard.jpg' alt='' /></a>";
	}else{
		leftOffset = getElementX(placeholderContainerPhObj);
		topOffset = getElementY(placeholderContainerPhObj);
		advContainerPhObj.style.left = leftOffset+"px";
		advContainerPhObj.style.top = topOffset+"px";
	}
	
	if (activateContainer && advContainerPhObj.style.display == "none"){
		advContainerPhObj.style.display = "block";
	}
}

