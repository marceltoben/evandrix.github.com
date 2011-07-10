// runner.js

// From eval-exception, figure out the line number or -1.
function extractLine(e, evalLine) {
  if (e.inhibitLine) return -1;  // can be set to specifically inhibit line numbers
  
  // Safari has a .line attribute which is what we want.
  if (e.line) {
    return e.line;
  }
  
  // Firefox has a .lineNumber
  if (e.lineNumber) {
    return e.lineNumber - evalLine + 1;
  }
  
  return -1;
}


// Given id of textarea, eval its code.
// For code errors, returns an error object with
// .userError true and .name .line .message set.
// Otherwise returns null.
function evaluate(inID) {
  var ta = document.getElementById(inID);
  var text = ta.value;
  var evalLine = 0;
  var error = new Error;
  if (error.lineNumber) evalLine = error.lineNumber + 3;
  try {
    eval(text);
  }
  catch(e) {
    e.userError = true;
    var line = extractLine(e, evalLine)
    if (line != -1) e.userLine = line;
    return e;
  }
  return null;
}

// Select the given line in the ta (for error reporting)
function selectLine(ta, line) {
  if (!ta.setSelectionRange) return;
  
  var count = 0;
  var start = 0;
  var text = ta.value;
  for (var i = 0; i<text.length; i++) {
    if (text[i] == "\n" || (start!=0 && i==text.length-1)) {
      // todo: check if above test works on windows
      count++;  // [i] is the end of line count
      if (count == line - 1) start = i + 1;
      else if (count == line ) {
        ta.focus();
        ta.setSelectionRange(start, i);
        return;
      }
    }
  }
}


// Wrap evaluate() with UI calls.
// Prints/line-selects on error output.
function evaluateWrapper(inID) {
  try {
    var e = evaluate(inID);
    if (e != null) {
      var msg = "<font color=red>Error: " + e.message + "</font>";
      if (e.userLine) msg += " line:" + e.userLine;
      print(msg);
      if (e.userLine) {
        var ta = document.getElementById(inID);
        selectLine(ta, e.userLine);
      }
    }
  }
  catch (e) {
    alert("cs101 eval error:" + e);
  }
}


var running = false;

// Wrapper for evaluate which clears the output
// and allows that GUI update to happen before
// running.
function evaluateClear(id) {
  // took this out -- problem if they hit the Stop Script button.
  //if (running) {
  //  // It's hard to hit this case, as event-processing is blocked during the computation,
  //  // however I saw it happen once in testing with firefox.
  //  return;
  //}
  running = true;
  store("", id);
  
  window.globalRunId = id;  // hack: set state used by printing

  clearOutput();
  
  var ta = document.getElementById(id);
  var text = ta.value;
  preloadImages(text);
  
  // hack: use setTimeout to run this a bit in the future, so the UI
  // update of the above clearOutput() goes through.
  setTimeout(function() {
    try {
      evaluateWrapper(id)
    }
    finally {
      running = false;
    }
  }, 100);
}


// Storage

var SPREFIX = "cs101.";

// Stores the text for the given textarea id
// Adds the given prefix (defaults to "cs101." if omitted).
// Does not store if the text area contains only whitespace.
// If the data is "del", stores blank data.
function store(prefix, id) {
  if (!prefix) prefix = SPREFIX;
  var ta = document.getElementById(id);
  var text = ta.value;
  var trimmed = text.replace(/\s/g,"");
  if (trimmed.length > 0) {  // detect if this is basically empty data
    if (trimmed == 'del') text = "";  // special case to delete
    localStorage.setItem(prefix + id, text);
  }
}

// Retrieves the text for the given id.
// Changes null to "", so you get back a string at a minimum.
function retrieve(prefix, id) {
  if (!prefix) prefix = SPREFIX;
  var val = localStorage.getItem(prefix + id);
  if (!val) val = "";
  return val;
}

// Loop through all the stored
function retrieveAll(ids) {
  for (var i in ids) {
    var ta = document.getElementById(ids[i]);
    var gotten = retrieve("", ids[i]);
    ta.value = gotten;
  }
}



// Turnin

// ids is a list of ids for this page
// turi
function turnin(ids) {
  var output = document.getElementById("turnin-output");
  
  var text = "Author(s):\README notes for grader:";
  var count = 0;
  for (var i in ids) {
    var gotten = retrieve("", ids[i]);
    if (gotten) count++;
    text += "\n\n----------\n" + ids[i] + "\n\n" + gotten
  }

  output.innerHTML = "<p>Text for submission (count " + count + ")" +
   "<pre>" + text + "</pre>";
}

// hack to turn off the check for some pages
//window.cs101nobrowsercheck = 1;

function checkFirefox() {
  if (window.cs101nobrowsercheck) return;
  
  if (navigator.userAgent.indexOf("Firefox") == -1) {
    var warn = document.getElementById("warning-output");
    warn.innerHTML = "<font color=red>Warning: this page only works with the latest Firefox. " +
      "This will be fixed ultimately, but for now the limitation is real.</font>";
  }
}

window.onload = checkFirefox;
