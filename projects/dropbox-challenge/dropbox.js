var db = {
  grid: [],
  target: 0,
  logBox: null,
  drawBox: null,
  placed: 0,
  totalBoxes: 0,
  
  solve: function(o) {
    o = (o)?o:{};
    this.target = 0;
    this.placed = 0;
    this.totalBoxes = 0;
    this.grid = [[]];
    
    // Audits & setup
    o.biggestFirst = !!o.biggestFirst;
    o.minArea = !!o.minArea;
    if (o.drawBox && o.drawBox.tagName) {
      this.drawBox = o.drawBox;
    }
    if (o.logBox && o.logBox.tagName) {
      this.logBox = o.logBox;
      this.logBox.innerHTML = "";
    }
    
    var boxes = this.auditAndGetBoxes(o.input);
    if (!boxes || boxes.length < 1) {
      this.log("Invalid box input!");
      return null;
    }
    
    // Place all boxes in grid and expand as needed
    var ob, ix, iy, ls, ss, x, y, dx, dy, f, r;
    var cut = boxes.length;
    while (boxes.length > 0) {
      // ensure no runaway loops
      cut--;
      if (cut < 0) { break; }
      
      ob = this._findAllOpenings();
      this.log('There are '+ob.length+' openings...');
      
      // See who we have room for...
      f = false;
      for (var i=0, l=ob.length; i<l; ++i) {
        for (var j=0, l2=boxes.length; j<l2; ++j) {
          if (ob[i].w >= boxes[j][0] && ob[i].h >= boxes[j][1]) {
            this._placeBox(boxes[j], ob[i].x, ob[i].y, false);
            boxes.splice(j,1);
            f = true;
            
          } else if (ob[i].h >= boxes[j][0] && ob[i].w >= boxes[j][1]) {
            this._placeBox(boxes[j], ob[i].x, ob[i].y, true);
            boxes.splice(j,1);
            f = true;
          }
          if (f) { break; }
        }
        if (f) { break; }
      }
      
      // we couldn't find room for anything
      // lets place biggest possible box in biggest opening and make room if needed
      if (!f) {
        this.log("Can't find a big enough opening, looking for best fit...");
        var add = 999;
        var bix, biy, bi, bx, by; // vars for placement
        var ixr, iyr, a, ar, sx, sy; // temp vars when finding least add
        r = false;
        
        for (var i=0, l=ob.length; i<l; ++i) {
          for (var k=0, l2=boxes.length; k<l2; ++k) {
            if (o.minArea) {
              j = k;
            } else {
              j = 0;
            }
            // here we find the minimum necessary grid increase...
            
            // if the opening is on the bottom right...
            if (ob[i].x + ob[i].w === this.grid[0].length && 
                ob[i].y + ob[i].h === this.grid.length) {
              ix = Math.max(0, (ob[i].x + boxes[j][0]) - this.grid[0].length);
              iy = Math.max(0, (ob[i].y + boxes[j][1]) - this.grid.length);
              a = (ix * (this.grid.length + iy)) + (iy * (this.grid[0].length + ((ix && iy)?0:ix)));
              
              ixr = Math.max(0, (ob[i].x + boxes[j][1]) - this.grid[0].length);
              iyr = Math.max(0, (ob[i].y + boxes[j][0]) - this.grid.length);
              ar = (ixr * (this.grid.length + iyr)) + (iyr * (this.grid[0].length + ((ixr && iyr)?0:ixr)));
              
              this.log(" OPTION: Found a bottom-right opening, would add either: "+a+" or "+ar+" (rotated) for this box: "+boxes[j][0]+" "+boxes[j][1]);
              
              if (a < add || ar < add) {
                f = true;
                r = (ar < a);
                add = Math.min(a, ar);
                bi = j;
                bx = ob[i].x;
                by = ob[i].y;
                if (r) {
                  bix = ixr;
                  biy = iyr;
                } else {
                  bix = ix;
                  biy = iy;
                }
                
                // see if we should shift box placement in opening
                sx = sy = 0;
                if (bix < 1) {
                  if (r && boxes[j][1] < ob[i].w) {
                    sx = (ob[i].w - boxes[j][1]); s = true;
                  } else if (!r && boxes[j][0] < ob[i].w) {
                    sx = (ob[i].w - boxes[j][0]); s = true;
                  }
                  
                } else if (biy < 1) {
                  if (r && boxes[j][0] < ob[i].h) {
                    sy = (ob[i].h - boxes[j][0]); s = true;
                  } else if (!r && boxes[j][1] < ob[i].h) {
                    sy = (ob[i].h - boxes[j][1]); s = true;
                  }
                }
                if (sx != 0 || sy != 0) {
                  this.log(" - would shift placement in opening by ("+sx+", "+sy+")");
                  bx += sx;
                  by += sy;
                }
              }
              
            } else {
              // ...otherwise we try to fit a side horizontally...
              if ((ob[i].y + ob[i].h) === this.grid.length) {
                dx = ob[i].w - boxes[j][0];
                dy = ob[i].w - boxes[j][1];
                if (dx > -1 && ((dy > -1 && dx <= dy) || dy < 0)) {
                  ix = Math.max(0, (ob[i].x + boxes[j][0]) - this.grid[0].length);
                  iy = Math.max(0, (ob[i].y + boxes[j][1]) - this.grid.length);
                  a = (ix * (this.grid.length + iy)) + (iy * (this.grid[0].length + ((ix && iy)?0:ix)));
                  this.log(" OPTION: Found a horizontal opening, would add "+a+" for this box: "+boxes[j][0]+" "+boxes[j][1]);
                  if (a < add) {
                    add = a;
                    f = true;
                    r = false;
                    bi = j;
                    bx = ob[i].x;
                    by = ob[i].y;
                    bix = ix;
                    biy = iy;
                  }
                  
                } else if (dy >= 0) {
                  ixr = Math.max(0, (ob[i].x + boxes[j][1]) - this.grid[0].length);
                  iyr = Math.max(0, (ob[i].y + boxes[j][0]) - this.grid.length);
                  ar = (ixr * (this.grid.length + iyr)) + (iyr * (this.grid[0].length + ((ixr && iyr)?0:ixr)));
                  this.log(" OPTION: Found a horizontal opening, would add "+ar+" (rotated) for this box: "+boxes[j][0]+" "+boxes[j][1]);
                  if (ar < add) {
                    add = ar;
                    f = true;
                    r = true;
                    bi = j;
                    bx = ob[i].x;
                    by = ob[i].y;
                    bix = ixr;
                    biy = iyr;
                  }
                }
              } else {
                // ...or try to fit a side vertically...
                dx = ob[i].h - boxes[j][0];
                dy = ob[i].h - boxes[j][1];
                if (dy > -1 && ((dx > -1 && dy <= dx) || dx < 0)) {
                  ix = Math.max(0, (ob[i].x + boxes[j][0]) - this.grid[0].length);
                  iy = Math.max(0, (ob[i].y + boxes[j][1]) - this.grid.length);
                  a = (ix * (this.grid.length + iy)) + (iy * (this.grid[0].length + ((ix && iy)?0:ix)));
                  this.log(" OPTION: Found a vertical opening, would add "+a+" for this box: "+boxes[j][0]+" "+boxes[j][1]);
                  if (a < add) {
                    add = a;
                    f = true;
                    r = false;
                    bi = j;
                    bx = ob[i].x;
                    by = ob[i].y;
                    bix = ix;
                    biy = iy;
                  }
                  
                } else if (dx >= 0) {
                  ixr = Math.max(0, (ob[i].x + boxes[j][1]) - this.grid[0].length);
                  iyr = Math.max(0, (ob[i].y + boxes[j][0]) - this.grid.length);
                  ar = (ixr * (this.grid.length + iyr)) + (iyr * (this.grid[0].length + ((ixr && iyr)?0:ixr)));
                  this.log(" OPTION: Found a vertical opening, would add "+ar+" (rotated) for this box: "+boxes[j][0]+" "+boxes[j][1]);
                  if (ar < add) {
                    add = ar;
                    f = true;
                    r = true;
                    bi = j;
                    bx = ob[i].x;
                    by = ob[i].y;
                    bix = ixr;
                    biy = iyr;
                  }
                }
              }
            }
          }
        }
        
        // Now see what just "tacking on" would add...
        if (o.biggestFirst) {
          // This method adds larger boxes first predominantly...
          // If we just have one box left or haven't found a spot yet, 
          // see if just adding more space is "cheaper"
          if (boxes.length === 1 || !f) {
            var nr = false;
            f = true;
            ls = Math.max(boxes[0][0], boxes[0][1]);
            ss = Math.min(boxes[0][0], boxes[0][1]);
            if (!this.grid[0]) {
              dx = dy = 0;
            } else {
              dx = this.grid[0].length - ls;
              dy = this.grid.length - ls;
            }
            
            if ((dx > -1 && dy < dx) || (dx < 0)) {
              iy = sy = 0;
              ix = ss;
              sx = this.grid[0].length;
              if (this.grid.length < ls) {
                iy = ls - this.grid.length;
              }
              if (ss === boxes[0][1]) {
                nr = true;
              }
            } else {
              iy = ss;
              sy = this.grid.length;
              ix = sx = 0;
              if (this.grid[0].length < ls) {
                ix = ls - this.grid[0].length;
              }
              if (ss === boxes[0][0]) {
                nr = true;
              }
            }
            
            a = (ix * (this.grid.length + iy)) + (iy * (this.grid[0].length + ((ix && iy)?0:ix)));
            this.log(" OPTION: Tacking on next biggest box would add "+a+((r)?" (rotated)":"")+" for this box: "+boxes[0][0]+" "+boxes[0][1]);
            if (a < add) {
              r = nr;
              add = a;
              bix = ix;
              biy = iy;
              bi = 0;
              bx = sx;
              by = sy;
            }
          }
        } else {
          // This method adds smaller boxes first predominantly...
          // Go through each box and see if just tacking it onto a side
          // would be "cheaper"
          var nr;
          for (var i=0, l=boxes.length; i<l; ++i) {
            nr = false;
            ls = Math.max(boxes[i][0], boxes[i][1]);
            ss = Math.min(boxes[i][0], boxes[i][1]);
            if (!this.grid[0]) {
              dx = dy = 0;
            } else {
              dx = Math.abs(this.grid[0].length - ls);
              dy = Math.abs(this.grid.length - ls);
            }
            
            if (dy < dx) {
              iy = sy = 0;
              ix = ss;
              sx = this.grid[0].length;
              if (this.grid.length < ls) {
                iy = ls - this.grid.length;
              }
              if (ss === boxes[i][1]) {
                nr = true;
              }
            } else {
              iy = ss;
              sy = this.grid.length;
              ix = sx = 0;
              if (this.grid[0].length < ls) {
                ix = ls - this.grid[0].length;
              }
              if (ss === boxes[i][0]) {
                nr = true;
              }
            }
            
            a = (ix * (this.grid.length + iy)) + (iy * (this.grid[0].length + ((ix && iy)?0:ix)));
            this.log(" OPTION: Tacking on would add "+a+((r)?" (rotated)":"")+" for this box: "+boxes[i][0]+" "+boxes[i][1]);
            if (a < add) {
              f = true;
              r = nr;
              add = a;
              bix = ix;
              biy = iy;
              bi = i;
              bx = sx;
              by = sy;
            }
          }
        }
        
        // now increase the grid as necessary and place the box which 
        // adds the least amount to the grid
        if (f) {
          this._increaseGrid(bix, biy);
          this._placeBox(boxes[bi], bx, by, r);
          boxes.splice(bi,1);
        }
      }
      
    } // end of box loop
    
    if (this.placed != this.totalBoxes) {
      this.log("ERROR: Unable to solve (total boxes="+this.totalBoxes+" vs number placed="+this.placed+")");
      return null; // failed to place all boxes
    }
    
    this._drawSolution();
    
    // return necessary grid size (the solution)
    var s = (this.grid.length * this.grid[0].length);
    this.log("SOLVED: Minimum area required: "+s+" (minimum possible: "+this.target+", difference of "+(s-this.target)+")");
    return s;
  },
  
  auditAndGetBoxes: function(input) {
    // trim input and split by line
    input = input.replace(/^\s*/, "").replace(/\s*$/, "").split('\n');
    var b, x, y;
    var boxes = [];
    for (var i=0, l=input.length; i<l; ++i) {
      b = input[i].split(' ');
      if (b.length === 2) {
        x = Number(b[0]);
        y = Number(b[1]);
        if (x && x >= 1 && y && y >= 1) {
          boxes.push([Math.floor(x), Math.floor(y)]);
          this.target += (boxes[boxes.length-1][0] * boxes[boxes.length-1][1]);
        }
      }
    }
    
    this.totalBoxes = boxes.length;
    // reverse sort to find biggest boxes
    boxes.sort(db.boxSort);
    return boxes;
  },
  
  boxSort: function(a,b) {
    var aa = a[0] * a[1];
    var ba = b[0] * b[1];
    var ad = ba - aa;
    if (ad) {
      return ad;
    } else {
      // for equal areas, sort by longest side
      a = (a[0] > a[1])?a[0]:a[1];
      b = (b[0] > b[1])?b[0]:b[1];
      return b - a;
    }
  },
  
  log: function(msg) {
    if (!this.logBox) { return; }
    
    this.logBox.innerHTML += msg + "<br />";
  },
  
  _increaseGrid: function(x, y) {
    x = (x < 0)?0:x;
    y = (y < 0)?0:y;
    
    this.log('GRID INCREASED by: '+x+', '+y);
    
    // initial grid handling
    if (this.grid.length < 1) {
      this.grid.push([]);
      y--;
    }
    
    for (var i=0, l=this.grid.length; i<l; ++i) {
      for (var j=0; j<x; ++j) {
        this.grid[i].push(0);
      }
    }
    var newRow = [];
    for (var i=0, l=this.grid[0].length; i<l; ++i) {
      newRow.push(0);
    }
    for (var i=0; i<y; ++i) {
      this.grid.push([].concat(newRow));
    }
  },
  
  _placeBox: function(b, x, y, rotate) {
    rotate = !!rotate;
    var w = (rotate)?b[1]:b[0];
    var h = (rotate)?b[0]:b[1];
    if (this.grid.length >= (y + h) && this.grid[0].length >= (x + w)) {
      for (var i=0; i<h; ++i) {
        for (var j=0; j<w; ++j) {
          // top row
          if (i === 0) {
            if (j === 0 || j == (w - 1)) {
              this.grid[y+i][x+j] = 1;
            } else {
              this.grid[y+i][x+j] = 2;
            }
          
          // bottom row
          } else if (i == (h - 1)) {
            if (j === 0 || j == (w - 1)) {
              this.grid[y+i][x+j] = 1;
            } else {
              this.grid[y+i][x+j] = 2;
            }
          
          // left & right side
          } else if (j === 0 || j == (w - 1)) {
            this.grid[y+i][x+j] = 3;
          
          // middle
          } else {
            this.grid[y+i][x+j] = 4;
          } 
        }
      }
    }
    this.log('BOX PLACED'+((rotate)?' (rotated)':'')+' at '+x+', '+y+" ["+b[0]+", "+b[1]+"]");
    this.placed++;
  },
  
  _findAllOpenings: function() {
    var ob = [];
    for (var i=0, l=this.grid.length; i<l; ++i) { 
      for (var j=0, l2=this.grid[i].length; j<l2; ++j) {
        // found open spot...
        if (this.grid[i][j] === 0) {
          ob.push(this._findOpeningDimensions(j, i));
        }
      }
    }
    
    var uniOps = [];
    var isUni, uniPt;
    // go through each box, then look for that box in another box
    // ignore openings completely contained by another opening
    for (var i=0, l=ob.length; i<l; ++i) {
      isUni = true;
      for (var j=0, l2=ob.length; j<l2; ++j) {
        uniPt = false;
        if (j != i) { // don't check against itself
          // go through each point and see if all points are in 2nd opening
          for (m = ob[i].x, l3=(ob[i].w + ob[i].x); m<l3; ++m) {
            for (n = ob[i].y, l4=(ob[i].h + ob[i].y); n<l4; ++n) {
              if (!this._isPointInBox([m, n], ob[j])) {
                uniPt = true;
                break;
              }
            }
            if (uniPt) { break; }
          }
          if (!uniPt) {
            isUni = false;
            break;
          }
        }
      }
      if (isUni) {
        uniOps.push(ob[i]);
      }
    }
    
    uniOps.sort(db.boxSort);
    return uniOps;
  },
  
  _isPointInBox: function(p, b) {
    if (p[0] >= b.x && p[0] < (b.x + b.w) &&
        p[1] >= b.y && p[1] < (b.y + b.h)) {
      return true;
    }
    return false;
  },
  
  _findOpeningDimensions: function(x, y) {
    var b = {x:x, y:y, w:0, h:0};
    for (var i=y, l=this.grid.length; i<l; ++i) { 
      for (var j=x, l2=this.grid[i].length; j<l2; ++j) {
        if (j===x) {
          if (this.grid[i][j] !== 0) {
            b.h = i - y;
            break;
          }
        } else {
          if (this.grid[i][j] !== 0 && (!b.w || b.w > (j-x))) {
            b.w = j - x;
            break;
          }
        }
      }
      if (b.h) { break; } // if we have a height, we're done
    }
    if (!b.w) { b.w = this.grid[y].length - x; }
    if (!b.h) { b.h = this.grid.length - y; }
    
    return b;
  },
  
  _drawSolution: function() {
    // Draw solution if requested
    if (!this.drawBox) { return; }
    var n = this.drawBox;
    
    n.innerHTML = '';
    var s;
    for (var i=0, l=this.grid.length; i<l; ++i) { 
      for (var j=0, l2=this.grid[i].length; j<l2; ++j) {
        s = this.grid[i][j];
        if (s === 1) {
          n.innerHTML += "+";
        } else if (s === 2) {
          n.innerHTML += "-";
        } else if (s === 3) {
          n.innerHTML += "|";
        } else if (s === 4) {
          n.innerHTML += "%";
        } else {
          n.innerHTML += "&nbsp;";
        }
      }
      n.innerHTML += "<br />";
    }
  }
  
};
