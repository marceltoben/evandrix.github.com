

// Given same-origin file, return its text contents.
function readFile(filename) {
  var client = new XMLHttpRequest();
  var async = false;  // made async work, but sync seems better for this purpose.
  client.open("GET", filename, async); // false=sync
  
  // This is firefox only. It is necessary for the file: case, seemingly
  // due to a firefox bug in that case where it barfs on non-xml data
  // by trying to parse it.
  if (client.overrideMimeType) {
    client.overrideMimeType('text/plain');  // ;charset=UTF-8
  }
  
  client.send(null);
  return client.responseText;
}

/*
function RowString(val) {
  this.val = val;
    this.length = (this.__value__ = __value__ || "").length;
}

with(RowString.prototype = new String) {
  toString = valueOf = function() {return this.val};
  startsWith = function(s) {
}
*/

// Adding startsWith and endsWith to the String class -- these are badly needed
// by the baby data.

if (!String.prototype.startsWith){
  String.prototype.startsWith = function (str) {
    return (this.lastIndexOf(str, 0) == 0);  // using lastIndex avoids searching the whole string.
  }
}

if (!String.prototype.endsWith){
  String.prototype.endsWith = function (str) {
    var index = this.length - str.length;
    if (index < 0) return false;
    return (this.indexOf(str, index) != -1);
  }
}


// Given a text line, explode the CSV and return an array elements.
// Columns (optional) is the expected number of columns.
// Returns null on empty string, as you might see with a blank line.
// The elements are whitespace trimmed.
// Can make this more sophisticated about CSV format later.
function splitCSV(line, columns) {
  line = line.replace(/^\s+|\s+$/g,'');  // .trim() effectively, and below
  if (line == '') return null;
  
  var parts = line.split(/,/, -1);
  for (var i in parts) {
    parts[i] = parts[i].replace(/^\s+|\s+$/g,'');  
  }
  
  // hack: file can omit blank data from RHS .. add it back on
  while (columns && parts.length < columns) {
    parts.push("");
  }
  return parts;
}



Row = function(table, rowArray) {
  this.table = table;
  this.array = rowArray;
}

Row.prototype.table;
Row.prototype.array;

// Returns the nth value from this row.
Row.prototype.getColumn = function(n) {
  // todo: could do bounds checking here to be more friendly
  return this.array[n];
};

// Returns the value for the named field.
Row.prototype.getField = function(fieldName) {
  var index = this.table.getFieldIndex(fieldName);
  if (index == -1) {
    return "Bad field name:" + fieldName;
  }
  return this.array[index];
};

// Returns the raw array; used for printing.
Row.prototype.getArray = function() {
  return this.array;
};


// Returns a pretty string form.
Row.prototype.getString = function() {
  //var result = "";
  // this version included field: labels within the data
  //var fields = this.table.getFields();
  //for (var i in fields) {
  //  result = result + fields[i] + ":" + this.array[i] + " ";
  //}
  //return result;
  return this.array.join(", ");
};





SimpleTable = function(filename) {
  var text = readFile(filename);
  var lines = text.split(/\n|\r\n/);  // test: this does work with DOS line endings
  
  // todo: could have some logic about if the first row is the field names or not
  this.fields = splitCSV(lines[0]);
  lines.splice(0, 1);  // remove 0th element

  var rows = new Array();
  for (i in lines) {
    var parts = splitCSV(lines[i], this.fields.length);
    if (parts != null) {  // essentially we skip blank lines
      rows.push(new Row(this, parts));
    }
  }
  this.rows = rows;
}

SimpleTable.prototype.fields;
SimpleTable.prototype.rows;

// Returns the number of columns.
SimpleTable.prototype.getColumnCount = function() {
  return this.fields.length;
};

// Returns an array of the field names.
SimpleTable.prototype.getFields = function() {
  return this.fields;
};


// Limits the table to just n rows.
SimpleTable.prototype.limitRows = function(n) {
  this.rows.splice(n, this.rows.length-n);
};

// Returns the index for a field name (case sensitive).
// Used internally by row.getField()
SimpleTable.prototype.getFieldIndex = function(fieldName) {
  for (var i in this.fields) {
    if (this.fields[i] == fieldName) return i;
  }
  return -1;  // todo: could throw or something here
};

// Returns the number of rows.
SimpleTable.prototype.getRowCount = function() {
  return this.rows.length;
};

// Returns the nth row.
SimpleTable.prototype.getRow = function(n) {
  if (n < 0 || n >= this.rows.length) {
    throw "Count of rows is " + this.rows.length + ", but attempting to get row:" + n;
  }
  return this.rows[n];
};





// Tables class introduced to support a collection of multiple tables
// to look at multiple years of data.
// Here we stick within the simple getXXX style rather than JavaScript
// nateive arrays, .length etc.

Tables = function() {
  this.array = new Array();
}

Tables.prototype.array;

// Reads and adds the given table to the Tables collection.
// (could have a version where this takes the table, fully formed,
// but having this as compact as possible on the client is nice).
Tables.prototype.addTables = function(filename) {
  for (var i=0; i<arguments.length; i++) {
    var simple = new SimpleTable(arguments[i]);
    this.array.push(simple);
  }
};

// Returns the number of stored tables.
Tables.prototype.getTableCount = function() {
  return this.array.length;
};

// Returns the nth table.
Tables.prototype.getTable = function(n) {
  return this.array[n];
};



// SimpleList class provides generic "array" facility
// within a simple getXXX style rather than JavaScript
// nateive arrays, .length etc.

SimpleList = function(item) {
  this.array = new Array();
  for (var i=0; i<arguments.length; i++) {
    this.array.push(arguments[i]);
  }
}

SimpleList.prototype.array;

// Reads and adds the given table to the Tables collection.
// (could have a version where this takes the table, fully formed,
// but having this as compact as possible on the client is nice).
SimpleList.prototype.add = function(item) {
  for (var i=0; i<arguments.length; i++) {
    this.array.push(arguments[i]);
  }
};

// Returns the number of stored item.
SimpleList.prototype.getItemCount = function() {
  return this.array.length;
};

// Returns the nth item.
SimpleList.prototype.getItem = function(n) {
  if (n < 0 || n >= this.array.length) {
    throw "Count of items is " + this.array.length + ", but attempting to get item:" + n;
  }
  return this.array[n];
};

