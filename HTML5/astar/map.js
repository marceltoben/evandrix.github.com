/* This code is sloppy. Why not take a look at something a bit prettier, like astar.js? */

var tileMargin = 1;
var tileSize = 20;
var canvasWidth = 800;
var canvasHeight = 590;
var randThreshold = 0.3;
var tileArray;
var tileY = 0;
var tileX = 0;
var isStartSelected = false;
var startTile = [null, null];
var endTile = [null, null];
var heuristic = "manhattan";
var cutCorners = false;

function init () {
	var canvas = document.getElementById("canvas");
	canvas.setAttribute("width", canvasWidth);
	canvas.setAttribute("height", canvasHeight);
	canvas.setAttribute("style", "border: 0px");
	drawNewMap(canvas, tileSize);
	canvas.addEventListener("mouseover", mouseOverHandler, false);
	canvas.addEventListener("mouseout", mouseOutHandler, false);
}

function setHeuristic (heuristicSetting) {
	switch (heuristicSetting) {
		case "manhattan":
			heuristic = heuristicSetting;
			document.getElementById("manhattanimg").src="images/manhattanOn.png";
			document.getElementById("diagonalimg").src="images/diagonalOff.png";
			document.getElementById("euclideanimg").src="images/euclideanOff.png";
			break;
		case "diagonal":
			heuristic = heuristicSetting;
			document.getElementById("manhattanimg").src="images/manhattanOff.png";
			document.getElementById("diagonalimg").src="images/diagonalOn.png";
			document.getElementById("euclideanimg").src="images/euclideanOff.png";
			break;
		case "euclidean":
			heuristic = heuristicSetting;
			document.getElementById("manhattanimg").src="images/manhattanOff.png";
			document.getElementById("diagonalimg").src="images/diagonalOff.png";
			document.getElementById("euclideanimg").src="images/euclideanOn.png";
			break;
		default:
			break;
	}
}

function setCornerCutting () {
	if (cutCorners == true) {
		cutCorners = false;
		document.getElementById("cornercuttingimg").src="images/cornersOff.png";
	}
	else {
		cutCorners = true;
		document.getElementById("cornercuttingimg").src="images/cornersOn.png";
	}
}
		
function makePathArray (start, dest, tiles) {
	var pathArray = new Array(tiles.length);
	for (var i = 0; i < tiles.length; i++) {
		pathArray[i] = new Array(tiles[i].length);
	}
	for (var i = 0; i < tiles.length; i++) {
		for (var j = 0; j < tiles[i].length; j++) {
			if (tiles[i][j].isWalkable == true)
				pathArray[i][j] = "w";
			else
				pathArray[i][j] = "u";
		}
	}
	pathArray[start[0]][start[1]] = "s";
	pathArray[dest[0]][dest[1]] = "g";
	return pathArray;
}

function mouseClickHandler (e)
{
	var canvas = document.getElementById("canvas");
	var mouseX, mouseY;
	
	if (e.offsetX) {
		mouseX = e.offsetX;
		mouseY = e.offsetY;
	}
	else if (e.layerX) {
		mouseX = e.layerX;
		mouseY = e.layerY;
	}

	if (isStartSelected) {					
		if (mouseX < canvasWidth - (canvasWidth % (tileSize + tileMargin)) &&
			mouseY < canvasHeight - (canvasHeight % (tileSize + tileMargin))) {
			tileX = Math.floor(mouseX / (tileSize + tileMargin * 1.212));
			tileY = Math.floor(mouseY / (tileSize + tileMargin * 1.212));
			tileArray[tileY][tileX].clickdest(canvas);
		}
		endTile = new Array(tileY, tileX);
		
		var _path = [];
		_path = astar(makePathArray(startTile, endTile, tileArray), heuristic, cutCorners);
		
		drawPath(_path, canvas);
		
		tileArray[startTile[0]][startTile[1]].draw(canvas);
		startTile = [null, null];
		endTile = [null, null];
		isStartSelected = false;
	}
	else {
		isStartSelected = true;
		if (mouseX < canvasWidth - (canvasWidth % (tileSize + tileMargin)) &&
			mouseY < canvasHeight - (canvasHeight % (tileSize + tileMargin))) {
			tileX = Math.floor(mouseX / (tileSize + tileMargin * 1.212));
			tileY = Math.floor(mouseY / (tileSize + tileMargin * 1.212));
			tileArray[tileY][tileX].clickstart(canvas);
		}
		startTile = [tileY, tileX];
	}
}

function drawPath (path, canvas)
{
	if (path != null) {	
		for (var i = 0; i < path.length; i++) {
			tileArray[path[i].row][path[i].col].path(canvas);
		}
	}
	else {
		tileArray[endTile[0]][endTile[1]].error(canvas);
	}
}

function mouseMoveHandler (e)
{
	var canvas = document.getElementById("canvas");
	
	if ( (startTile[0] != tileY) || 
	     (startTile[1] != tileX)    ) {
		tileArray[tileY][tileX].draw(canvas);
	}
	
	var mouseX, mouseY;
	
	if (e.offsetX)  {
		mouseX = e.offsetX;
		mouseY = e.offsetY;
	}
	else if (e.layerX) {
		mouseX = e.layerX;
		mouseY = e.layerY;
	}
	
	if (mouseX < canvasWidth - (canvasWidth % (tileSize + tileMargin)) &&
		mouseY < canvasHeight - (canvasHeight % (tileSize + tileMargin))) {
		tileX = Math.floor(mouseX / (tileSize + tileMargin * 1.212));
		tileY = Math.floor(mouseY / (tileSize + tileMargin * 1.212));

		if ( (startTile[0] != tileY) || 
		     (startTile[1] != tileX)    ) {
			tileArray[tileY][tileX].hover(canvas);
		}
	}
}

function mouseOverHandler (e) {
	var c = document.getElementById("canvas");
	c.addEventListener("mousemove", mouseMoveHandler, false);
	c.addEventListener("click", mouseClickHandler, false);
}

function mouseOutHandler (e) {
	var c = document.getElementById("canvas");
	c.removeEventListener("mousemove", mouseMoveHandler, false);
	c.removeEventListener("click", mouseClickHandler, false);
}

function clearCanvas (canvas) {
	canvas.width = canvas.width;
}

function drawNewMap (canvas, tilesize) {
	clearCanvas(canvas);
	tileArray = makeTileArray(canvas, tilesize);
	for (var k = 0; k < tileArray.length; k++) {
		for (var j = 0; j < tileArray[k].length; j++)
				tileArray[k][j].draw(canvas);
	}
}

function makeTileArray (canvas, tilesize) {
	var cols = Math.floor(canvas.getAttribute("width") / (tilesize + tileMargin));
	var rows = Math.floor(canvas.getAttribute("height") / (tilesize + tileMargin));
	
	var tileArray = new Array(rows);
	for (var i = 0; i < tileArray.length; i++)
		tileArray[i] = new Array(cols);
	
	var xstep;
	var ystep;
	
	for (var k = 0; k < tileArray.length; k++) {
		ystep = k * (tilesize + tileMargin) + tileMargin;
	
		for (var j = 0; j < tileArray[k].length; j++) {
			xstep = j * (tilesize + tileMargin) + tileMargin;
		
			if (Math.random() < randThreshold)
				tileArray[k][j] = new Tile(xstep, ystep, tilesize, false)
			else
				tileArray[k][j] = new Tile(xstep, ystep, tilesize, true)
		}
	}
	
	return tileArray;
}

function Tile (x, y, side, isWalkable) {
	this.x = x;
	this.y = y;
	this.side = side;
	this.isWalkable = isWalkable;
	
	this.draw = function (canvas) {
		if (canvas.getContext) {
			ctx = canvas.getContext("2d");
			if (this.isWalkable)
				ctx.fillStyle = "#499849";
			else
				ctx.fillStyle = "#766037";
			ctx.fillRect(this.x, this.y, this.side, this.side);
		}
	}
	
	this.hover = function (canvas) {
		ctx = canvas.getContext("2d");
		if (this.isWalkable)
			ctx.fillStyle = "#E861B0";
		else
			ctx.fillStyle = "#5E4A29";
		ctx.fillRect(this.x, this.y, this.side, this.side);
	}
	
	this.clickstart = function (canvas) {
		ctx = canvas.getContext("2d");
		if (this.isWalkable)
			ctx.fillStyle = "#9779D9";
		else
			ctx.fillStyle = "#887749";
		ctx.fillRect(this.x, this.y, this.side, this.side);
	}
	
	this.clickdest = function (canvas) {
		ctx = canvas.getContext("2d");
		if (this.isWalkable)
			ctx.fillStyle = "#F1D641";
		else
			ctx.fillStyle = "#B06129";
		ctx.fillRect(this.x, this.y, this.side, this.side);
	}
	
	this.path = function (canvas) {
		ctx = canvas.getContext("2d");
		ctx.fillStyle = "#6BA7E4";
		ctx.fillRect(this.x, this.y, this.side, this.side);
	}
	
	this.error = function (canvas) {
		ctx = canvas.getContext("2d");
		ctx.fillStyle = "#FF0000";
		ctx.fillRect(this.x, this.y, this.side, this.side);
	}
}

window.onload = init;