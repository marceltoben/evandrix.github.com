/**
 * Function to getElementById
 *
 * @param String eId
 */
function eId(eId){
	e = document.getElementById(eId);
	if (e){
		return e;
	}else{
		return false;
	}
}

/**
 * function to toggle a Object 'display' status
 * default: none|block
 *
 * @param: objectId
 * @param: defaultValue
 */
function toggleDiv(divId,defaultValue){
	if (!defaultValue){
		defaultValue = "block";
	}

	e = document.getElementById(divId);
	if (e){
		if (e.style.display == "none"){
			e.style.display = defaultValue;
		}else{
			e.style.display = "none";
		}
	}
}

function blinkNickVisible(elIdNick){
	return true;
}

function clearField(field){
	field.value = "";
	field.focus();
}

function checkSearchField(){
	searchField = eId("search_field");

	if (searchField.value.length < 3){
		searchField.style.background = "#f00";
		searchField.value = searchField.value;
		searchField.focus();
	}else if(searchField.value == findGameString){
		searchField.style.background = "#f00";
		clearField(searchField);
	}else{
		document.location.href = searchLocation+"/"+searchField.value.replace(/ /g,"_");
	}
}

/**
 * Hintergrund toggeln
 *
 */
function toggleBackground(elementObj,imageScr){
	elementObj.style.backgroundImage = "url("+imageScr+")";
}

/**
 * Tab-Boxen toggeln
 *
 */
function toggleTabBox(tabGroup,currentTab,maxTabs){
	elControlPrefix = "tabcontrol__";
	elPrefix = "tabbox__";
	elSeperator = "_";
	elActiveClassName = "tabBoxLinkActive";
	
	fixedTabs = 0;
	
	for(i=0;i<maxTabs;i++){
		elCurrent = eId(elPrefix+tabGroup+elSeperator+i);
		elCurrentControl = eId(elControlPrefix+tabGroup+elSeperator+i);
		
		/* toggle for Tab */
		if (elCurrent && i==currentTab){
			elCurrent.style.display = "block";
			fixedTabs++;
		}else if (elCurrent){
			elCurrent.style.display = "none";
			fixedTabs++;
		}
		
		/* toggle for Control */
		if (elCurrentControl && i==currentTab){
			elClassWords = elCurrentControl.className.split(" ");
			isInArray = false;
			for (z=0;z<elClassWords.length;z++){
				if (elClassWords[z] == elActiveClassName){
					isInArray = true;
					break;
				}
			}
			
			if (!isInArray){
				elClassWords[elClassWords.length] = elActiveClassName;
			}
			
			tmpClassName = "";
			for (z=0;z<elClassWords.length;z++){
				if (elClassWords[z] != ""){
					tmpClassName += elClassWords[z];
				}
				if (z<(elClassWords.length-1)){
					tmpClassName += " ";
				}
			}						
			elCurrentControl.className = tmpClassName;
		}else if (elCurrent){
			elClassWords = elCurrentControl.className.split(" ");
			isInArray = false;
			for (z=0;z<elClassWords.length;z++){
				if (elClassWords[z] == elActiveClassName){
					elClassWords[z] = "";
					break;
				}
			}
						
			tmpClassName = "";
			for (z=0;z<elClassWords.length;z++){
				if (elClassWords[z] != ""){
					tmpClassName += elClassWords[z];
				}
				if (z<(elClassWords.length-1)){
					tmpClassName += " ";
				}
			}						
			elCurrentControl.className = tmpClassName;
		}
	}
	return fixedTabs;
}

/**
 * Absolute Position von links
 */
function getElementX(el){
	if (typeof(el) != "object"){
		el = eId(el);
	}
	
	x = el.offsetLeft;
	if (!el.offsetParent) return x;
	else return (x+getElementX(el.offsetParent));
}

/**
 * Absolute Position von oben
 */
function getElementY(el) {
	if (typeof(el) != "object"){
		el = eId(el);
	}
	
	y = el.offsetTop;
	if (!el.offsetParent) return y;
	else return (y+getElementY(el.offsetParent));
}

/**
 * Absolute Position des Element Bodens
 */
function getElementBottom(el){
	if (typeof(el) != "object"){
		el = eId(el);
	}
	
	elTop = getElementY(el);
	return elTop+el.offsetHeight;
}

/**
 * Absoluter Wert des Container-styles
 */
function getStyle(el,styleProp){
	if (typeof(el) != "object"){
		el = eId(el);
	}	
	if (el.currentStyle){
		var y = el.currentStyle[styleProp];
	}else if (window.getComputedStyle){
		var y = document.defaultView.getComputedStyle(el,null).getPropertyValue(styleProp);
	}
	return y;
}

/**
 * Entfernt Pixel/Prozent/Em werte
 * px|%|em
 */
function rP(text){
	text = text.replace("px","");
	text = text.replace("%","");
	text = text.replace("em","");
	return text;
}

/**
  * Funktion, um alle Container auf eine Ebene zu leveln
  */
function levelContainer(containerVars,forceId){
	containerObjects = new Array();
	heighestIndex = 0;
	
	for (i=0;i<containerVars.length;i++){
		tmpObject = eId(containerVars[i]);
		if (tmpObject){
			if (forceId == containerVars[i]){
				heighestIndex = containerObjects.length;
			}
			containerObjects[containerObjects.length] = tmpObject;
		}
	}
	
	if (!forceId){
		for (i=0;i<containerObjects.length;i++){
			if (getElementBottom(containerObjects[i]) > getElementBottom(containerObjects[heighestIndex])){
				heighestIndex = i;
			}
		}
	}
	
	for (i=0;i<containerObjects.length;i++){
		if (i == heighestIndex){
			continue;
		}
		
		/** check for browser-differences **/
		if (getStyle(containerObjects[i],"padding-top") == undefined){
			realContainerHeight = containerObjects[i].offsetHeight-rP(getStyle(containerObjects[i],"paddingTop"))-rP(getStyle(containerObjects[i],"paddingBottom"));
		}else{
			realContainerHeight = containerObjects[i].offsetHeight-rP(getStyle(containerObjects[i],"padding-top"))-rP(getStyle(containerObjects[i],"padding-bottom"));
		}
		tmpHeight = (getElementBottom(containerObjects[heighestIndex])-getElementBottom(containerObjects[i])) + realContainerHeight;
		containerObjects[i].style.height = tmpHeight+"px";
	}
}



function openPopupGame(gameHash){
	alert("#ToDo!\n"+gameHash);
}


/**
  * Handle a Webservice Action
  */
function doWebserviceAction(serviceName){
	new Ajax.Request("/webservice/serviceAction/"+serviceName,{asynchronous:true, evalScripts:true});
}

var observeContainerValues = new Array();
function app_observeContainer(advContainerId,observeName,observeFunction,forceFunction,recFlag){
	observeContainerObj = eId(advContainerId);
	if (!observeContainerObj){
		return false;
	}
	if(!forceFunction){
		forceFunction = "false";
	}else{
		forceFunction = "true";
	}
	forceAvailable = false;
	
	if (typeof(observeContainerValues[advContainerId]) == 'undefined'){
		observeContainerValues[advContainerId] = new Array();
		forceAvailable = true;
	}	
	if (typeof(observeContainerValues[advContainerId][observeName]) == 'undefined'){
		observeContainerValues[advContainerId][observeName] = eval("observeContainerObj."+observeName+"");
		forceAvailable = true;
	}
	
	if (observeContainerValues[advContainerId][observeName] != eval("observeContainerObj."+observeName+"") || (forceFunction == "true" && forceAvailable)){
		observedValueOld = observeContainerValues[advContainerId][observeName];
		observedValue = eval("observeContainerObj."+observeName+"");
		eval(observeFunction);
	}
	observeContainerValues[advContainerId][observeName] = eval("observeContainerObj."+observeName+"");
	
	if (!recFlag){
		window.setInterval("app_observeContainer(\""+advContainerId+"\",\""+observeName+"\",\""+observeFunction+"\","+forceFunction+",true);", 200);
	}
}

function app_observeContainers(advContainerId,secondAdvContainerId,observeName,observeFunction,recFlag){
	observeContainerObj = eId(advContainerId);
	secondAdvContainerObj = eId(secondAdvContainerId);
	if ((!observeContainerObj) || (!secondAdvContainerObj)){
		return false;
	}
	if (typeof(observeContainerValues[advContainerId]) == 'undefined'){
		observeContainerValues[advContainerId] = new Array();
	}	
	if (typeof(observeContainerValues[advContainerId][observeName]) == 'undefined'){
		observeContainerValues[advContainerId][observeName] = eval("secondAdvContainerObj."+observeName+"");
	}
	
	if (observeContainerValues[advContainerId][observeName] != eval("observeContainerObj."+observeName+"")){
		eval(observeFunction);
	}
	observeContainerValues[advContainerId][observeName] = eval("secondAdvContainerObj."+observeName+"");
	
	if (!recFlag){
		window.setInterval("app_observeContainer(\""+advContainerId+"\",\""+observeName+"\",\""+observeFunction+"\",true);", 200);
	}
}


/****************************
 * AutoImageChanger			*
 ****************************
 * Funktionsbibliothek zum Automatischen Wechseln der Mouseover/mouseout bilder eines Links
 * 
 * (c) millepondo services 
 * 2010-06-17
 *
 */
var AutoImageChanger = Class.create();
AutoImageChanger.prototype = {
	initialize: function() {
		document.observe('mouseover', (function(event){
			var target = event.findElement('a[rel^=autoimageswitch]') || event.findElement('area[rel^=autoimageswitch]');
			if (target) {
				event.stop();
				this.start(target,true);
			}
		}).bind(this));
		document.observe('mouseout', (function(event){
			var target = event.findElement('a[rel^=autoimageswitch]') || event.findElement('area[rel^=autoimageswitch]');
			if (target) {
				event.stop();
				this.start(target,false);
			}
		}).bind(this));
	},
	start: function(link,activateImg) {
		nodes = link.childNodes;
		imgNode = null;
		for(v=0;v<nodes.length;v++){
			if (nodes[v].nodeName == "img" || nodes[v].nodeName == "IMG"){
				imgNode = nodes[v];
				break;
			}
		}

		if (!imgNode){
			return false;
		}

		currentTarget = imgNode.src;
		elTargetExtensions = currentTarget.split(".");
		preLastExtension = elTargetExtensions[(elTargetExtensions.length-2)];
		elToken = preLastExtension.split("_");
		lastToken = elToken[(elToken.length-1)];

		newImgSrc = "";
		tmpSrc = "";
		for (z=0;z<(elToken.length-1);z++){
			tmpSrc += elToken[z]+"_";
		}

		/** switch the possible options **/
		if (lastToken == "on" || lastToken == "off"){
			if (activateImg){
				tmpSrc += "on";
			}else{
				tmpSrc += "off";
			}
		}else if (lastToken == "active" || lastToken == "inactive"){
			if (activateImg){
				tmpSrc += "active";
			}else{
				tmpSrc += "inactive";
			}
		}else if (lastToken == "normal" || lastToken == "hover"){
			if (activateImg){
				tmpSrc += "hover";
			}else{
				tmpSrc += "normal";
			}
		}

		for (i=0;i<(elTargetExtensions.length-2);i++){
			newImgSrc += elTargetExtensions[i]+".";
		}
		newImgSrc += tmpSrc+".";
		newImgSrc += elTargetExtensions[(elTargetExtensions.length-1)];

		imgNode.src = newImgSrc;
		return true;
	}
}
document.observe('dom:loaded', function () { new AutoImageChanger(); });

