// simple-image.js
// depends on having an "output" div for printing


//window.onload = function() {
//  var canvas = document.getElementById("canvas");
//  var context = canvas.getContext("2d");
//  image = document.getElementById("img");
//  context.drawImage(img, 0, 0);
//}


function sleepHack(ms) {
  var start = new Date();
  while (true) {
    var current = new Date();
    if (current - start >= ms) break;
  }
}


var appendCount = 0;

function decode() {
  clearOutput();
  var htmlImage = loadImage("liberty-encoded.png");
  var image = new SimpleImage(htmlImage);
  
  print("Before:");
  print(image);
  
  for (var x = 0; x < image.width; x++) {
    for (var y = 0; y < image.height; y++) {
      image.setRed(x, y, 0);
      //image.setGreen(x, y, image.getGreen(x, y) * 8);
      //image.setBlue(x, y, image.getBlue(x, y) * 8);
    }
  }
  
  print("After:");
  print(image);
}

function encode() {
  clearOutput();
  var htmlImage = loadImage("liberty.jpg");
  var image = new SimpleImage(htmlImage);
  
  print("Before:");
  print(image);
    
  for (var x = 0; x < image.width; x++) {
    for (var y = 0; y < image.height; y++) {
      image.setRed(x, y, Math.floor(Math.random()*256));
      image.setGreen(x, y, image.getGreen(x, y) / 8);
      image.setBlue(x, y, image.getBlue(x, y) / 8);
    }
  }
  
  print("After:");
  print(image);
}

var imageBlocker = false;

function block() {
  imageBlocker = true;
}

function unBlock() {
  imageBlocker = false;
}

function blockWait() {
  while (imageBlocker) { }
}
  

// Given image name, install it, find it in the DOM and return it.
// Note: I believe it must be on the same server as the code..
// see: http://stackoverflow.com/questions/2390232/why-does-canvas-todataurl-throw-a-security-exception
// possible fix: http://stackoverflow.com/questions/667519/firefox-setting-to-enable-cross-domain-ajax-request
function loadImage(filename) {
  // append img tag
  var output = getOutput();
  var id = "img" + appendCount;
  appendCount++;
  
  //block();
  var img = new Image(); // document.createElement("img");  // apparently new Image() also does this.
  img.setAttribute('id', id);
  img.setAttribute('src', filename);
  img.setAttribute('style', 'display:none');
  //img.setAtrribute('onload', 'imageBlocker = false;');
  output.appendChild(img);
  
  return img;
}


// image could be htmlImage or SimpleImage
function printOrig(something) {
  var output = document.getElementById("output");

  if (typeof something == "string" || typeof something == "number" ) {  // note: instanceof and String is a no-go
    var p = document.createElement("p");
    p.innerHTML = something;
    output.appendChild(p);
    // could make a text node, here but with innerHTML, markup works
  }
  else if (something instanceof HTMLImageElement) {
    var copy = something.cloneNode(true);
    copy.setAttribute("style", "");
    copy.setAttribute("id", "");

    var p = document.createElement("p");
    p.appendChild(copy);
    output.appendChild(p);
  }
  else if (something instanceof SimpleImage) {
    // append canvas
    var id = "canvas" + appendCount;
    appendCount++;
    
    var canvas = document.createElement("canvas");
    canvas.setAttribute('id', id);
  
    var p = document.createElement("p");
    p.appendChild(canvas);
    output.appendChild(p);
  
    something.drawTo(canvas);
  }
  else {
    alert("bad print with:" + something);
  }
  flushOutput();
}

// Print any number of things, separated by spaces and ending with a carriage return.
function print() {
 for (var i=0; i<arguments.length; i++) {
   printOne(arguments[i]);
 }
 printOne("<br>");
}

// Print any number of things, without the ending carriage return.
function printStart() {
 for (var i=0; i<arguments.length; i++) {
   printOne(arguments[i]);
 }
}

// Returns the current global output element to use -- uses
// globalRunId, so uses the correct output area for the current run.
// Could add "throw" logic to detect errors here.
function getOutput() {
  return document.getElementById(window.globalRunId + "-output");
}

// Low level print-one-thing. The something can be a string, number, htmlImage or SimpleImage.
function printOne(something) {
  var output = getOutput();
  
  // hack: make Row work
  if (something instanceof Row) {
    something = something.getString();  // getArray vs. getString
  }
  
  // hack: make array look like string
  if (something instanceof Array) {
    something = "[" + something.join(", ") + "]";
  }
  
  if (typeof something == "string" || typeof something == "number") {  // note: instanceof and String is a no-go
    var p = document.createElement("text");
    var spacer = " ";
    if (something == "<br>") spacer = "";
    p.innerHTML = something + spacer;  // by using innerHTML here, markup in the string works.
    output.appendChild(p);
  }
  else if (something instanceof HTMLImageElement) {
    var copy = something.cloneNode(true);
    copy.setAttribute("style", "");
    copy.setAttribute("id", "");

    // used to create <p> here to put on new line.
    //var p = document.createElement("p");
    //p.appendChild(copy);
    output.appendChild(copy);
  }
  else if (something instanceof SimpleImage) {
    // append canvas
    var id = "canvas" + appendCount;
    appendCount++;
    
    var canvas = document.createElement("canvas");
    canvas.setAttribute('id', id);
    output.appendChild(canvas);  
    something.drawTo(canvas);
  }
  else {
    alert("bad print with:" + something);
  }
}

// Clears the current output.
function clearOutput() {
  var output = getOutput();
  output.innerHTML = "";
}

// Clears output for the given input id.
// like "hw1-1" .. -output is added internally.
function clearOutputId(id) {
  var output = document.getElementById(id + "-output");
  if (!output) {
    var err = new Error;
    err.message = "clearOutput() with bad id " + id;
    err.inhibitLine = true;  // this gets the .message through, but the line number will be wrong
    throw(err);
  }
  output.innerHTML = "";
}




// Note there is an Image built in, so don't use that name.

// Makes an invisible canvas, inited either with a "foo.jpg" url,
// or an htmlImage from loadImage().
// maybe: could make this work with another SimpleImage too.
SimpleImage = function(image) {
  var htmlImage = null;
  if (typeof image == "string") {
    htmlImage = loadImage(image);
  } else if (image instanceof HTMLImageElement) {
    htmlImage = image;
  } else {
    var err = new Error;
    err.message = "new SimpleImage(...) requires a htmlImage.";
    err.inhibitLine = true;  // this gets the .message through, but the line number will be wrong
    throw(err);
  }
    
  // append canvas
  var output = getOutput();
  var id = "canvas" + appendCount;
  appendCount++;
  
  var canvas = document.createElement("canvas");
  canvas.setAttribute('id', id);
  canvas.setAttribute('style', 'display:none');
  
  var p = document.createElement("text");
  p.appendChild(canvas);
  output.appendChild(p);
  
  if (!htmlImage.complete) {
    alert("Image loading -- may need to run again");
  }
  
  this.width = htmlImage.width; // parseInt(htmlImage.getAttribute("width"));
  this.height = htmlImage.height; // parseInt(htmlImage.getAttribute("height"));
  
  //console.log(this);

  this.canvas = canvas;
  this.canvas.width = this.width; // setAttribute("width", this.width)
  this.canvas.height = this.height;  //setAttribute("height", this.height)
  
  this.context = canvas.getContext("2d");  

  this.drawFrom(htmlImage);

  // Do this last so it gets the actual image data.
  this.imageData = this.context.getImageData(0, 0, this.width, this.height);
}


SimpleImage.prototype.canvas;
SimpleImage.prototype.context;
SimpleImage.prototype.width;
SimpleImage.prototype.height;
SimpleImage.prototype.imageData;

// Takes on the pixels of the given html image
SimpleImage.prototype.drawFrom = function(htmlImage) {
  // drawImage takes either an htmlImage or a canvas
  this.context.drawImage(htmlImage, 0, 0);
};

SimpleImage.prototype.drawTo = function(toCanvas) {
  toCanvas.width = this.width;
  toCanvas.height = this.height;
  
  this.flush();
  var toContext = toCanvas.getContext("2d");
  // drawImage() takes either an htmlImg or a canvas
  toContext.drawImage(this.canvas, 0, 0);
};

SimpleImage.prototype.getWidth = function() {
  return this.width;
}

SimpleImage.prototype.getHeight = function() {
  return this.height;
}

// Computes index into 1-d array, and checks correctness of x,y values
SimpleImage.prototype.getIndex = function(x, y) {
  if (x == null || y == null) {
    var e = new Error("need x and y values passed to this function");
    e.inhibitLine = true;
    throw e;
  }
  else if (x < 0 || x >= this.width || y < 0 || y >= this.height) {
    var e = new Error("x/y out of bounds x:" + x + " y:" + y);
    e.inhibitLine = true;
    throw e;
  }
  else return (x + y * this.width) * 4;
}


// --setters--
// Sets the red value for the given x,y
SimpleImage.prototype.setRed = function(x, y, value) {
  var index = this.getIndex(x, y);
  this.imageData.data[index] = clamp(value);
  
  // This is how you would write back each pixel individually.
  // It gives terrible performance (on Firefox anyway).
  // this.context.putImageData(this.imageData, 0, 0, x, y, 1, 1);
  // dx dy dirtyX dirtyY dirtyWidth dirtyHeight
};

// Sets the green value for the given x,y
SimpleImage.prototype.setGreen = function(x, y, value) {
  var index = this.getIndex(x, y);
  this.imageData.data[index + 1] = clamp(value);
};

// Sets the blue value for the given x,y
SimpleImage.prototype.setBlue = function(x, y, value) {
  var index = this.getIndex(x, y);
  this.imageData.data[index + 2] = clamp(value);
};

// Sets the alpha value for the given x,y
SimpleImage.prototype.setAlpha = function(x, y, value) {
  var index = this.getIndex(x, y);
  this.imageData.data[index + 3] = clamp(value);
};


// --getters--
// Gets the red value for the given x,y
SimpleImage.prototype.getRed = function(x, y) {
  var index = this.getIndex(x, y);
  return this.imageData.data[index];
};
// Gets the green value for the given x,y
SimpleImage.prototype.getGreen = function(x, y) {
  var index = this.getIndex(x, y);
  return this.imageData.data[index + 1];
};
// Gets the blue value for the given x,y
SimpleImage.prototype.getBlue = function(x, y) {
  var index = this.getIndex(x, y);
  return this.imageData.data[index + 2];
};
// Gets the blue value for the given x,y
SimpleImage.prototype.getAlpha = function(x, y) {
  var index = this.getIndex(x, y);
  return this.imageData.data[index + 3];
};
// Gets the red value for the given x,y
SimpleImage.prototype.getPixel = function(x, y) {
  var index = this.getIndex(x, y);
  return 'r:' + this.imageData.data[index] + " g:" + this.imageData.data[index+1] + " b:" + this.imageData.data[index+2];

  //return [this.imageData.data[index], this.imageData.data[index+1], this.imageData.data[index+2]];
};


// Pushes any accumulated local changes out to the screen
SimpleImage.prototype.flush = function() {
  this.context.putImageData(this.imageData, 0, 0);  // can omit x/y/width/height and get default behavior
};

// Given code text, scan for image urls so they can be pre-loaded.
// This is a hack, but it mostly works.
// This can be called *before* we run the student code, avoiding async image-load problems.
function preloadImages(code) {
  var re = /SimpleImage\(\s*"(.*?)"\s*\)/g;
  while (ar = re.exec(code)) {
    loadImage(ar[1]);  // grab first matching group
  }
}

// Clamp values to be in the range 0..255. Used by setRed() et al.
function clamp(value) {
  // value = Math.floor(value);  // .js is always float, so this line
  // is probably unncessary, unless we get into some deep JIT level.
  if (value < 0) return 0;
  if (value > 255) return 255;
  return value;
}


function dir(obj) {
  for (key in obj) {
    console.log(key + ":" + obj[key])
  }
}


/*
Client patterns:

orig = getImage("foo.jpg");
print(orig);
si = SimpleImage(orig);  // canvas hidden!
// do operations
print(si)

*/


/*
canvas/pixel doc
http://beej.us/blog/2010/02/html5s-canvas-part-ii-pixel-manipulation/

Note file url origin setting required in Firefox, same prob in other browsers
http://stackoverflow.com/questions/358538/getimagedata-in-firefox-3-causing-ns-error-dom-security-err

There's some problem with the images produced by PIL, but .js produced images work fine.
Maybe some Python/PIL prob, or a prob in my code.

*/
