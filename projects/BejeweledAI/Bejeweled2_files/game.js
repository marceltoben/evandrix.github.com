/*
 * Funktion zum Bewerten des Spiels
 */
function rateGame(gameId,points){
	rateContainer = eId("gamefooter_rate");
	loadContainer = eId("gamefooter_load");

	rateContainer.style.display = "none";
	loadContainer.style.display = "block";

	new Ajax.Updater('game_footer_container',"/game/remote_rate_game/"+gameId+"/"+points,{asynchronous:true, evalScripts:true});
}

function loadHighscoreResults(gameId){
	loadContainer = eId("highscore_load_results");
	loadingContainer = eId("highscore_loading_results");

	loadContainer.style.display = "none";
	loadingContainer.style.display = "block";

	new Ajax.Updater('highscore_results_container',"/game/remote_highscore_results/"+gameId,{asynchronous:true, evalScripts:true});
}

function loadUserPlayedGame(gameId){
	new Ajax.Request("/game/remote_user_played_game/"+gameId,{asynchronous:true, evalScripts:true});
}

function makeFavorite(gameId){
	new Ajax.Updater('game_footer_container',"/game/remote_toggle_favorite/"+gameId,{asynchronous:true, evalScripts:true});
}

function makeMail(){
	e = eId("game__report_container");
	if(e){
		if(e.style.display == "block"){
			e.style.display = "none";
			app_reposAllAdvertisingContainers();
		}
	}
	e = eId("game__share_container");
	if(e){
		if(e.style.display == "none"){
			e.style.display = "block";
			app_reposAllAdvertisingContainers();
		} else {
			e.style.display = "none";
			app_reposAllAdvertisingContainers();
		}
	}
}

function makeJackpotInfo(){
	jackpotInfoWindow = window.open("", "secondAppWindow", "width=640,height=515,scrollbars=no,menubar=no,resizable=no,titlebar=no,status=no,toolbar=no");
	jackpotInfotext = "<div style='text-align: center; margin-top: 240px;'><img src='http://cdn2.kaisergames.de/images/layout/loading.gif' alt='' /></div>";
	jackpotInfoWindow.document.body.innerHTML = jackpotInfotext;
	response = new Ajax.Request("/game/remote_jackpot_info",{asynchronous:false, evalScripts:true,onSuccess: function(transport) {jackpotInfotext = transport.responseText}});
	jackpotInfoWindow.document.body.innerHTML = jackpotInfotext;
}

function send_sharing_mail(){
	theParams = new Array();
	theParams['name']  = eId('input_share_name').value;
	theParams['gameid']  = eId('input_share_gameid').value;
  	theParams['email']  = eId('input_share_email').value;
  	theParams['message']  = eId('input_share_message').value;
	new Ajax.Updater('game__sharing_outer_div', '/game/remote_send_sharing_mail', {method:'post',parameters:theParams, asynchronous:true, evalScripts:true});
}

function send_report_mail(){
	theParams = new Array();
	if(eId("check_report_reason_1").checked){
		theParams['reason'] = "not_working";
	} else {
		theParams['reason'] = "other_reason";
	}
	theParams['gameid']  = eId('input_report_gameid').value;
  	theParams['message']  = eId('input_report_message').value;
	new Ajax.Updater('game__report_outer_div', '/game/remote_send_report_mail', {method:'post',parameters:theParams, asynchronous:true, evalScripts:true});
}

function makeFacebook(gameId){
	alert("ToDo \n#"+gameId);
}

function makeWarn(){
	e = eId("game__share_container");
	if(e){
		if(e.style.display == "block"){
			e.style.display = "none";
			app_reposAllAdvertisingContainers();
		}
	}
	e = eId("game__report_container");
	if(e){
		if(e.style.display == "none"){
			e.style.display = "block";
			app_reposAllAdvertisingContainers();
		} else {
			e.style.display = "none";
			app_reposAllAdvertisingContainers();
		}
	}
}

var originalGamesizeWidth = 0;
var originalGamesizeHeight = 0;
var currentGamesizeWidth = 0;
var currentGamesizeHeight = 0;

function setGamesizes(){
	elGame1 = eId("flash_game_0");
	originalGamesizeWidth = elGame1.width;
	originalGamesizeHeight = elGame1.height;
	if (originalGamesizeWidth < 0 || originalGamesizeWidth == undefined && elGame1){
		originalGamesizeWidth = elGame1.style.width.split("px").join("");
		originalGamesizeHeight = elGame1.style.height.split("px").join("");
	}
	/* set this options for zoomGame + pregameAd */
	currentGamesizeWidth = originalGamesizeWidth;
	currentGamesizeHeight = originalGamesizeHeight;
}

/*
 * Funktion zum neusetzen des GameToggles
 */
function resetGameToggleLinks(){
	elToggleInactive = eId("game_toggle_inactive");
	elToggleActive = eId("game_toggle_active");
	
	elToggleActive.style.display = "none";
	elToggleInactive.style.display = "block";
}

/*
 * Funktion zum Vergrößern / Verkleinern des Spiels
 */
function toggleGamesize(maxOn){
	elToggleInactive = eId("game_toggle_inactive");
	elToggleActive = eId("game_toggle_active");
	elGame1 = eId("flash_game_0");
	elGame2 = eId("flash_game_1");
	gameContainer = eId("game_content");
	
	/** gameContainer is 1px, if pregameAd is loading... - so ignore **/
	if (gameContainer.offsetHeight == "1" || gameContainer.offsetHeight == "1px" || gameContainer.offsetHeight == ""){
		return false;
	}

	if (maxOn){
		maxGamesizeWidth = 960;
	}else{
		maxGamesizeWidth = maximumGameSize;
	}

	if (originalGamesizeWidth == 0 || originalGamesizeHeight == 0){
		originalGamesizeWidth = elGame1.width;
		originalGamesizeHeight = elGame1.height;
	}

	relRatio = originalGamesizeHeight/originalGamesizeWidth;

	if (elToggleActive.style.display == "none"){
		elToggleActive.style.display = "block";
		elToggleInactive.style.display = "none";

		elGame1.width = maxGamesizeWidth;
		elGame1.height = maxGamesizeWidth*relRatio;

		gameContainer.style.width = maxGamesizeWidth+"px";
		gameContainer.style.height = (maxGamesizeWidth*relRatio)+"px";

		if (elGame2){
			elGame2.width = maxGamesizeWidth;
			elGame2.height = maxGamesizeWidth*relRatio;
		}
		
		currentGamesizeWidth = maxGamesizeWidth;
		currentGamesizeHeight = maxGamesizeWidth*relRatio;
	}else{
		elToggleActive.style.display = "none";
		elToggleInactive.style.display = "block";

		elGame1.width = originalGamesizeWidth;
		elGame1.height = originalGamesizeHeight;
		
		gameContainer.style.width = originalGamesizeWidth+"px";
		gameContainer.style.height = originalGamesizeHeight+"px";

		if (elGame2){
			elGame2.width = originalGamesizeWidth;
			elGame2.height = originalGamesizeHeight;
		}
		
		currentGamesizeWidth = originalGamesizeWidth;
		currentGamesizeHeight = originalGamesizeHeight;
	}
	resizeGameArea();

	/* last repos Advertising */
	app_reposAllAdvertisingContainers();
}

/*
 * Funktion zum Wiederherstellen der Containergrößen für Spiel<->Ähnliche Spiele
 */
function resizeGameArea(){
	elGameContainer = eId("game_overlay_container");
	elSimGamContainer = eId("right_toggle_container");
	pixelBalance = 10;

	if ((!elGameContainer) || (!elSimGamContainer)){
		return false;
	}

	minHeight = elGameContainer.offsetHeight;
	//$('right_toggle_container').morph('height: '+ (minHeight+pixelBalance) + 'px');
	elSimGamContainer.style.height = (minHeight+pixelBalance) + "px";
}

/*
 * Funktion zum Setzen der Werbecontainer im Spiel
 */
function setGameAdvertisingContainers(){
	/* zur Zeit deaktiviert, da kein Skyscraper im Content erwünscht! */
	return false;
	elOGControl = eId("app_game_othergames_control");
	elAControl = eId("app_advertising_skyscraper_control");

	if (document.body.offsetWidth >= advertisingWindowSizeX){
		elOGControl.style.display = "block";
		elAControl.style.display = "none";
	}else{
		elOGControl.style.display = "none";
		elAControl.style.display = "block";
	}
}


/*
 * Funktion zum Wiederherstellen der Containergrößen für Spielserien<->Werbung<->Infobox
 */
function resizeInfoArea(){
	/* third find LeftBoxContainer*/
	elLeftbox = eId("game_gameinfo_container");
	leftPixelBalance = -21;

	/* first find RightBoxContainer*/
	rightPixelBalance = 0;
	resizeRightContainer = false;
	elRightbox = eId("app_advertising_skyscraper_control");

	if ((!elRightbox) || elRightbox.style.display == "none"){
		elRightbox = eId("game_other_container");
		resizeRightContainer = true;
		rightPixelBalance = 0;
	}

	/* second find MiddleBoxContainer*/
	middlePixelBalance = 0;
	elMiddlebox = eId("app_advertising_rectangle_ph");
	if (!elMiddlebox){
		elMiddlebox = eId("game_instruction_container");
		middlePixelBalance = -11;
	}else{
		leftPixelBalance++;
	}



	/* now find heighest Container */
	elBottomRight = getElementBottom(elRightbox);
	elBottomMiddle = getElementBottom(elMiddlebox);
	elBottomLeft = getElementBottom(elLeftbox);

	/* right is heighest */
	if (elBottomRight > elBottomMiddle && elBottomRight > elBottomLeft){
		elMiddlebox.style.height = ((elBottomRight-elBottomMiddle)+elMiddlebox.offsetHeight+middlePixelBalance)+ "px";
		elLeftbox.style.height = ((elBottomRight-elBottomLeft)+elLeftbox.offsetHeight+leftPixelBalance)+ "px";
	}
	/* middle is heighest */
	else if (elBottomMiddle > elBottomRight && elBottomMiddle > elBottomLeft){
		if (resizeRightContainer){
			elRightbox.style.height = ((elBottomMiddle-elBottomRight)+elRightbox.offsetHeight+rightPixelBalance)+ "px";
		}
		elLeftbox.style.height = ((elBottomMiddle-elBottomLeft)+elLeftbox.offsetHeight+leftPixelBalance)+ "px";
	}
	else{
		if (resizeRightContainer){
			elRightbox.style.height = ((elBottomLeft-elBottomRight)+elRightbox.offsetHeight+rightPixelBalance)+ "px";
		}
		elMiddlebox.style.height = ((elBottomLeft-elBottomMiddle)+elMiddlebox.offsetHeight+middlePixelBalance)+ "px";
	}
	return true;
}

/*
 * Funktion zum Bewerten des Spiels
 */
function rateGame(gameId,points){
	rateContainer = eId("gamefooter_rate");
	loadContainer = eId("gamefooter_load");

	rateContainer.style.display = "none";
	loadContainer.style.display = "block";

	new Ajax.Updater('game_footer_container',"/game/remote_rate_game/"+gameId+"/"+points,{asynchronous:true, evalScripts:true});
}

function loadHighscoreResults(gameId){
	loadContainer = eId("highscore_load_results");
	loadingContainer = eId("highscore_loading_results");

	loadContainer.style.display = "none";
	loadingContainer.style.display = "block";

	new Ajax.Updater('highscore_results_container',"/game/remote_highscore_results/"+gameId,{asynchronous:true, evalScripts:true});
}

function loadUserPlayedGame(gameId){
	new Ajax.Request("/game/remote_user_played_game/"+gameId,{asynchronous:true, evalScripts:true});
}

function makeFavorite(gameId){
	new Ajax.Updater('game_footer_container',"/game/remote_toggle_favorite/"+gameId,{asynchronous:true, evalScripts:true});
}

function makeMail(){
	e = eId("game__report_container");
	if(e){
		if(e.style.display == "block"){
			e.style.display = "none";
			app_reposAllAdvertisingContainers();
		}
	}
	e = eId("game__share_container");
	if(e){
		if(e.style.display == "none"){
			e.style.display = "block";
			app_reposAllAdvertisingContainers();
		} else {
			e.style.display = "none";
			app_reposAllAdvertisingContainers();
		}
	}
}

function makeJackpotInfo(){
	jackpotInfoWindow = window.open("", "secondAppWindow", "width=640,height=515,scrollbars=no,menubar=no,resizable=no,titlebar=no,status=no,toolbar=no");
	jackpotInfotext = "<div style='text-align: center; margin-top: 240px;'><img src='http://cdn.kaisergames.de/images/layout/loading.gif' alt='' /></div>";
	jackpotInfoWindow.document.body.innerHTML = jackpotInfotext;
	response = new Ajax.Request("/game/remote_jackpot_info",{asynchronous:false, evalScripts:true,onSuccess: function(transport) {jackpotInfotext = transport.responseText}});
	jackpotInfoWindow.document.body.innerHTML = jackpotInfotext;
}

function send_sharing_mail(){
	theParams = new Array();
	theParams['name']  = eId('input_share_name').value;
	theParams['gameid']  = eId('input_share_gameid').value;
  	theParams['email']  = eId('input_share_email').value;
  	theParams['message']  = eId('input_share_message').value;
	new Ajax.Updater('game__sharing_outer_div', '/game/remote_send_sharing_mail', {method:'post',parameters:theParams, asynchronous:true, evalScripts:true});
}

function send_report_mail(){
	theParams = new Array();
	if(eId("check_report_reason_1").checked){
		theParams['reason'] = "not_working";
	} else {
		theParams['reason'] = "other_reason";
	}
	theParams['gameid']  = eId('input_report_gameid').value;
  	theParams['message']  = eId('input_report_message').value;
	new Ajax.Updater('game__report_outer_div', '/game/remote_send_report_mail', {method:'post',parameters:theParams, asynchronous:true, evalScripts:true});
}

function makeFacebook(gameId){
	alert("ToDo \n#"+gameId);
}

function makeWarn(){
	e = eId("game__share_container");
	if(e){
		if(e.style.display == "block"){
			e.style.display = "none";
			app_reposAllAdvertisingContainers();
		}
	}
	e = eId("game__report_container");
	if(e){
		if(e.style.display == "none"){
			e.style.display = "block";
			app_reposAllAdvertisingContainers();
		} else {
			e.style.display = "none";
			app_reposAllAdvertisingContainers();
		}
	}
}

var originalGamesizeWidth = 0;
var originalGamesizeHeight = 0;
var currentGamesizeWidth = 0;
var currentGamesizeHeight = 0;

function setGamesizes(){
	elGame1 = eId("flash_game_0");
	originalGamesizeWidth = elGame1.width;
	originalGamesizeHeight = elGame1.height;
	if (originalGamesizeWidth < 0 || originalGamesizeWidth == undefined && elGame1){
		originalGamesizeWidth = elGame1.style.width.split("px").join("");
		originalGamesizeHeight = elGame1.style.height.split("px").join("");
	}
	/* set this options for zoomGame + pregameAd */
	currentGamesizeWidth = originalGamesizeWidth;
	currentGamesizeHeight = originalGamesizeHeight;
	
	/* set height for gameOverlayContainer */
	elBackgroundContainer = eId("game_background_content");
	elOverlayContainer = eId("game_overlay_container");
	elGameContainer = eId("game_content");
	
	if (elBackgroundContainer.offsetHeight > elGameContainer.offsetHeight){
		elOverlayContainer.style.height = elBackgroundContainer.offsetHeight+"px";
	}
}

/*
 * Funktion zum neusetzen des GameToggles
 */
function resetGameToggleLinks(){
	elToggleInactive = eId("game_toggle_inactive");
	elToggleActive = eId("game_toggle_active");
	
	elToggleActive.style.display = "none";
	elToggleInactive.style.display = "block";
}

/*
 * Funktion zum Vergrößern / Verkleinern des Spiels
 */
function toggleGamesize(maxOn){
	elToggleInactive = eId("game_toggle_inactive");
	elToggleActive = eId("game_toggle_active");
	elGame1 = eId("flash_game_0");
	elGame2 = eId("flash_game_1");
	gameContainer = eId("game_content");
	
	/** gameContainer is 1px, if pregameAd is loading... - so ignore **/
	if (gameContainer.offsetHeight == "1" || gameContainer.offsetHeight == "1px" || gameContainer.offsetHeight == ""){
		return false;
	}

	if (maxOn){
		maxGamesizeWidth = 960;
	}else{
		maxGamesizeWidth = maximumGameSize;
	}

	if (originalGamesizeWidth == 0 || originalGamesizeHeight == 0){
		originalGamesizeWidth = elGame1.width;
		originalGamesizeHeight = elGame1.height;
	}

	relRatio = originalGamesizeHeight/originalGamesizeWidth;

	if (elToggleActive.style.display == "none"){
		elToggleActive.style.display = "block";
		elToggleInactive.style.display = "none";

		elGame1.width = maxGamesizeWidth;
		elGame1.height = maxGamesizeWidth*relRatio;

		gameContainer.style.width = maxGamesizeWidth+"px";
		gameContainer.style.height = (maxGamesizeWidth*relRatio)+"px";

		if (elGame2){
			elGame2.width = maxGamesizeWidth;
			elGame2.height = maxGamesizeWidth*relRatio;
		}
		
		currentGamesizeWidth = maxGamesizeWidth;
		currentGamesizeHeight = maxGamesizeWidth*relRatio;
	}else{
		elToggleActive.style.display = "none";
		elToggleInactive.style.display = "block";

		elGame1.width = originalGamesizeWidth;
		elGame1.height = originalGamesizeHeight;
		
		gameContainer.style.width = originalGamesizeWidth+"px";
		gameContainer.style.height = originalGamesizeHeight+"px";

		if (elGame2){
			elGame2.width = originalGamesizeWidth;
			elGame2.height = originalGamesizeHeight;
		}
		
		currentGamesizeWidth = originalGamesizeWidth;
		currentGamesizeHeight = originalGamesizeHeight;
	}
	resizeGameArea();

	/* last repos Advertising */
	app_reposAllAdvertisingContainers();
}

/*
 * Funktion zum Wiederherstellen der Containergrößen für Spiel<->Ähnliche Spiele
 */
function resizeGameArea(){
	elGameContainer = eId("game_overlay_container");
	elSimGamContainer = eId("right_toggle_container");
	pixelBalance = 5;

	if ((!elGameContainer) || (!elSimGamContainer)){
		return false;
	}

	minHeight = elGameContainer.offsetHeight;
	//$('right_toggle_container').morph('height: '+ (minHeight+pixelBalance) + 'px');
	elSimGamContainer.style.height = (minHeight+pixelBalance) + "px";
}

/*
 * Funktion zum Setzen der Werbecontainer im Spiel
 */
function setGameAdvertisingContainers(){
	/* zur Zeit deaktiviert, da kein Skyscraper im Content erwünscht! */
	return false;
	elOGControl = eId("app_game_othergames_control");
	elAControl = eId("app_advertising_skyscraper_control");

	if (document.body.offsetWidth >= advertisingWindowSizeX){
		elOGControl.style.display = "block";
		elAControl.style.display = "none";
	}else{
		elOGControl.style.display = "none";
		elAControl.style.display = "block";
	}
}


/*
 * Funktion zum Wiederherstellen der Containergrößen für Spielserien<->Werbung<->Infobox
 */
function resizeInfoArea(){
	/* third find LeftBoxContainer*/
	elLeftbox = eId("game_gameinfo_container");
	leftPixelBalance = -21;

	/* first find RightBoxContainer*/
	rightPixelBalance = 0;
	resizeRightContainer = false;
	elRightbox = eId("app_advertising_skyscraper_control");

	if ((!elRightbox) || elRightbox.style.display == "none"){
		elRightbox = eId("game_other_container");
		resizeRightContainer = true;
		rightPixelBalance = 0;
	}

	/* second find MiddleBoxContainer*/
	middlePixelBalance = 0;
	elMiddlebox = eId("app_advertising_rectangle_ph");
	if (!elMiddlebox){
		elMiddlebox = eId("game_instruction_container");
		middlePixelBalance = -11;
	}else{
		leftPixelBalance++;
	}



	/* now find heighest Container */
	elBottomRight = getElementBottom(elRightbox);
	elBottomMiddle = getElementBottom(elMiddlebox);
	elBottomLeft = getElementBottom(elLeftbox);

	/* right is heighest */
	if (elBottomRight > elBottomMiddle && elBottomRight > elBottomLeft){
		elMiddlebox.style.height = ((elBottomRight-elBottomMiddle)+elMiddlebox.offsetHeight+middlePixelBalance)+ "px";
		elLeftbox.style.height = ((elBottomRight-elBottomLeft)+elLeftbox.offsetHeight+leftPixelBalance)+ "px";
	}
	/* middle is heighest */
	else if (elBottomMiddle > elBottomRight && elBottomMiddle > elBottomLeft){
		if (resizeRightContainer){
			elRightbox.style.height = ((elBottomMiddle-elBottomRight)+elRightbox.offsetHeight+rightPixelBalance)+ "px";
		}
		elLeftbox.style.height = ((elBottomMiddle-elBottomLeft)+elLeftbox.offsetHeight+leftPixelBalance)+ "px";
	}
	else{
		if (resizeRightContainer){
			elRightbox.style.height = ((elBottomLeft-elBottomRight)+elRightbox.offsetHeight+rightPixelBalance)+ "px";
		}
		elMiddlebox.style.height = ((elBottomLeft-elBottomMiddle)+elMiddlebox.offsetHeight+middlePixelBalance)+ "px";
	}
	return true;
}

