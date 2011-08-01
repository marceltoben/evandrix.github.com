import copy
import random
import sys
import time
import logging
log = logging.getLogger("Br")
logging.basicConfig(levle=logging.INFO)

TL="TL"
TR="TR"
BL="BL"
BR="BR"

class R:
  corners = [TL, TR, BR, BL]

  def __init__(self, width, height):
    self.height = height
    self.width = width

    self.vert_map = {}
    self.rect_map = {}
    self.rotated = False
    self.anchor_point = None
    self.__colors = None

    self.__cluster = None
    self.__cluster_leader = None

  def __repr__(self):
    return "%sx%s#%s" % (self.width, self.height, self.anchor_point)

  # {{{ Corner Helpers & Calculations
  def corner_to_offset(self, c):
    ap = [0,0]
    if c[0] == "T":
      pass
    elif c[0] == "B":
      ap[1] = self.height
    else:
      raise Exception("Invalid Corner: %s" % (c))

    if c[1] == "L":
      pass
    elif c[1] == "R":
      ap[0] = self.width
    else:
      raise Exception("Invalid Corner: %s" % (c))

    return ap

  def corner_to_point(self, c):
    p = self.corner_to_offset
    return (p[0] + self.anchor_point[0], p[0] + self.anchor_point[0])

  def calculate_anchor_for_edge(self, c1, rect, c2):
    p1 = self.corner_to_offset(c1)
    p2 = rect.corner_to_offset(c2)
    traverse_point = [0,0]
    ap = self.anchor_point
    traverse_point[0] = ap[0] + p1[0] - p2[0]
    traverse_point[1] = ap[1] + p1[1] - p2[1]
    return traverse_point

  def calculate_anchor_for_rect(self, rect):
    # First figure out their connection points
    return self.calculate_anchor_for_edge(self.rect_map[rect], rect, rect.rect_map[self])

  # }}} Corner & Calculation Functions

  # {{{ Spatial Anchoring
  def anchor_to(self, point):
    point = tuple(point)
    log.debug( "Anchoring %s from %s to %s" % (self, self.anchor_point, point))
    if point == self.anchor_point:
      return

    if self.anchor_point and point != self.anchor_point:
      raise Exception("Already anchored! No pirating")

    self.anchor_point = point
    log.debug( "Coords are now: (%s, %s), (%s, %s)" % (self.x0, self.y0, self.x1, self.y1))
    for r in self.rect_map:
      r.anchor_to(self.calculate_anchor_for_rect(r))

  def unanchor(self, recurse=False):
    log.debug( "Pulling Anchor on %s" % self)
    if self.anchor_point:
      self.anchor_point = None

    if recurse:
      for r in self.rect_map:
        if r.anchor_point:
          r.unanchor(recurse)

  # Rotate this rectangle by swapping height and width
  def rotate(self):
    self.rotated = not self.rotated
    w,h = self.width, self.height
    self.width,self.height = h,w

  def rotate_corner(self, corner, amount=1):
    index = R.corners.index(corner)
    index += amount
    index %= len(R.corners)
    return R.corners[index]

  # Pivot this rectangle by moving each corner over by one and rotating the
  # rectangle. This Attempts to keep the attachment point during a rotation.
  # (It still requires the other connectec rectangle to pivot, too)
  def pivot(self):
    new_vert_map = {}
    new_rect_map = {}
    for corner in self.vert_map:
      new_corner = self.rotate_corner(corner, 1)
      new_vert_map[corner] = self.vert_map[corner]
      new_rect_map[self.vert_map[corner]] = new_corner

    self.vert_map = new_vert_map
    self.rect_map = new_rect_map
    self.rotate()


  # }}} Spatial Anchoring

  # {{{ Properties
  @property
  def name(self):
    return "%s,%s" % (self.width, self.height)

  @property
  def is_placed(self):
    return not not self.anchor_point

  @property
  def x0(self):
    return self.anchor_point[0]

  @property
  def y0(self):
    return self.anchor_point[1]

  @property
  def x1(self):
    return self.x0 + self.width

  @property
  def y1(self):
    return self.y0 + self.height

  @property
  def area(self):
    return self.height * self.width

  @property
  def neighbors(self):
    return self.rect_map.keys()

  @property
  def colors(self):
    if not self.__colors:
        r = random.random()
        g = random.random()
        b = random.random()
        self.__colors = (r,g,b,0.2)

    return self.__colors

  @property
  def cluster(self):
    return self.__cluster

  @property
  def cluster_leader(self):
    return self.__cluster_leader

  @property
  def is_cluster(self):
    return self.__cluster and len(self.__cluster) > 0
  # }}} Properties

  # Attach Functions {{{
  def attach_to(self, my_corner, rect, rect_corner):
    self.vert_map[my_corner] = rect
    self.rect_map[rect] = my_corner

  def attach(self, my_corner, rect, rect_corner):
    log.debug( "Attaching %s's %s corner to %s's %s corner" % (self, my_corner, rect, rect_corner))
    # Check if the attachment is valid.

    # For attachments, you don't want to have intersections (two rectangles go
    # into each other) or no overlap of edges
    if (my_corner[0] != rect_corner[0] and my_corner[1] != rect_corner[1]):
      raise Exception("Corner mismatch! Trying to connect %s to %s" % (my_corner, rect_corner))

    if (my_corner == rect_corner):
      raise Exception("Can't assign a connection in the same corner: %s" % my_corner)

    self.attach_to(my_corner, rect, rect_corner)
    rect.attach_to(rect_corner, self, my_corner)

    if self.anchor_point:
      rect.anchor_to(self.calculate_anchor_for_rect(rect))
    elif rect.anchor_point:
      self.anchor_to(rect.calculate_anchor_for_rect(self))


  def detach_from(self, rect):
    corner = self.rect_map[rect]
    if corner in self.vert_map:
      del self.vert_map[corner]

    del self.rect_map[rect]

  def detach(self, rect):
    if not rect:
      remove_rects = self.rect_map
      self.rect_map = {}
      self.vert_map = {}

      for rect in remove_rects:
        rect.detach_from(self)
    else:
      self.detach_from(rect)
      rect.detach_from(self)

  def set_cluster(self, cluster):
    self.__cluster = cluster
    self.__cluster_leader = cluster[0]

  # }}} Attach Functions

  # {{{ Geometry Functions

  # A rectangle overlaps another if any portion of one is inside the other
  # This is an exclusionary overlap, that doesn't count border pixels.
  def overlaps(self, other):
    if (self.x0 >= other.x1) or (self.x1 <= other.x0) or \
       (self.y0 >= other.y1) or (self.y1 <= other.y0):
          return False
    return True

  # }}}

base_corner_combinations = [ (TR, TL), (BR, BL), (TR, BR), (TL, BL) ]
#full_corner_combinations = [ (TL, TR), (BL, BR), (BR, TR), (BL, TL) ]
#corner_combinations = base_corner_combinations + full_corner_combinations
corner_combinations = base_corner_combinations

# Calculates the bounding box bb + p
def incremental_bounding_box(bb, r):
  return ((min(bb[0][0], r.x0), min(bb[0][1], r.y0)),
          (max(bb[1][0], r.x1), max(bb[1][1], r.y1)))

# Calculates the area for a bounding box 2x2
def bounding_area(bb):
  return abs(bb[1][0] - bb[0][0]) * abs(bb[1][1] - bb[0][1])

# Calculates the bounding box for all rectangles by taking maxima in x & y
def bounding_box(rectangles):
  max_x, max_y = 0, 0
  min_x, min_y = 1000, 1000

  for r in rectangles:
    min_x = min(min_x, r.x0)
    min_y = min(min_y, r.y0)
    max_x = max(max_x, r.x1)
    max_y = max(max_y, r.y1)

  return ((min_x, min_y), (max_x, max_y))

# Rectangle Placement Helper
def is_placed(r):
  return r.is_placed

def is_overlapping(rectangles, r):
  for ss in rectangles:
    if ss == r:
      continue

    if not ss.is_placed:
      continue

    if ss.overlaps(r):
      return True
  return False

# Moves a box's offsets from any integer positioning to positive (starting from) (0,0) based.
def normalize_box(xy0, xy1):
  offset_x = 0 - xy0[0]
  offset_y = 0 - xy0[1]

  return ((0, 0), (xy1[0]+offset_x, xy1[1]+offset_y))

class BruteSolver:
  BRANCHES={}
  NULL_DATA=(sys.maxint,None)
  def __init__(self, rectangles):
    self.rectangles = rectangles
    self.prev_maxima_time = 0
    self.sum_area = sum([x.area for x in self.rectangles])


  # }}} Representation Helpers
  def to_connection_str(self):
    rect_strs = []
    for r in self.rectangles:
      # rect1 (n1 connections) connect through c1 to rect2(n2 connections) on c2

      # c1 c2 | r1 r2 | n1 n2
      # c2 c1 | r2 r1 | n2 n1
      for n in r.neighbors:
        if n.name > r.name:
          c1 = n.rect_map[r]
          c2 = r.rect_map[n]
          s = "%s %s %s %s %s %s" % (c1, c2, n.name, r.name, len(n.vert_map), len(r.vert_map))
        else:
          c1 = r.rect_map[n]
          c2 = n.rect_map[r]
          s = "%s %s %s %s %s %s" % (c2, c1, r.name, n.name, len(r.vert_map), len(n.vert_map))

        rect_strs.append(s)

      rect_strs.sort()
      return " ".join(rect_strs)
  # }}} Representation Helpers

  def reset_recursor(self):
    self.cur_best = sys.maxint
    BruteSolver.BRANCHES.clear()


  def r_c_p(self, this_bbox, greedy=True, level=0):
    this_area = bounding_area(this_bbox)
    rect_str = self.to_connection_str()

    if rect_str and rect_str in BruteSolver.BRANCHES:
      log.debug('Hit a previous branch!')
      return  BruteSolver.BRANCHES[rect_str]


    if this_area >= self.cur_best:
      log.debug( 'Pruning, due to %s(cur_best) <= %s(this_area)' % (self.cur_best, this_area))
      return BruteSolver.NULL_DATA

    placed_area = this_area
    unplaced_area = self.sum_area - placed_area
    open_area = this_area - self.sum_area

    any_rects = any([not x.is_placed for x in self.rectangles])

    if not any_rects:
      found_time = time.time()
      time_diff = found_time - self.prev_maxima_time
      self.prev_maxima_time = found_time

      # Grow the time to spend in this branch based on the difference in previous
      # and how long it took to find.

      log.debug("***Hit a local maximum***")
      log.debug("Time between maxima: %s" % (time_diff))
      log.debug( "This area: %s" % this_area)
      log.debug( "Prev best: %s" % self.cur_best)
      log.debug( "Difference: %s" % (this_area / float(self.cur_best)))
      log.debug( "Efficiency: %s" % (self.sum_area / float(this_area)))

      self.cur_best = this_area
      self.cur_bbox = this_bbox
      cur_efficiency = self.sum_area / float(this_area)


      cr = copy.deepcopy(self.rectangles)
      return this_area, cr

    # This is only a subset of corner combinations, for now
    best_area = sys.maxint
    best_rects = None
    for i, a in enumerate(self.rectangles):
      possible_placements = []
      for b in self.rectangles[i:]:
        if a.is_placed == b.is_placed:
          continue

        if a.is_placed:
          s = a
          r = b
        else:
          s = b
          r = a


        for c1, c2 in corner_combinations:
          if not c1 in s.vert_map and not c2 in r.vert_map:
            for rotate in [True, False]:
              if rotate and (r.width == r.height):
                continue

              if rotate:
                r.rotate()


              s.attach(c1, r, c2) # Attach will try and set your anchor
              if is_overlapping(self.rectangles, r):
                r.detach(s)
                r.unanchor()
                continue

              bb = incremental_bounding_box(this_bbox, r)
              next_area, fully_placed_rects = self.r_c_p(bb, greedy=greedy, level=level+1)
              if next_area < best_area and fully_placed_rects:
                best_area = next_area
                best_rects = fully_placed_rects

              r.detach(s)
              r.unanchor()

              if rotate:
                r.rotate()


    BruteSolver.BRANCHES[rect_str] = best_area, best_rects
    return BruteSolver.BRANCHES[rect_str]

# }}} Recursive Place

  def place(self, origin_anchor=True, greedy=True):
    self.reset_recursor()
    best_area = 0
    best_rects = None
    for r in self.rectangles:
      # Anchoring r at top level
      if origin_anchor:
        r.anchor_to((0, 0))

      self.prev_maxima_time = time.time()
      best_area, best_rects = self.r_c_p(bounding_box([r]), greedy)
      r.unanchor()
      break

    return best_area, best_rects

def to_html(rectangles, filename):
  f = open("%s.html" % (filename), "w")

  min_x, min_y = 1000, 1000
  for r in rectangles:
    min_x = min(r.x0, min_x)
    min_y = min(r.y0, min_y)

  f.write( "<div>")
  for i in xrange(len(rectangles)):
    r = rectangles[i]
    f.write( "<div style='")
    f.write("width: %s; height: %s;" % (r.width-1, r.height-1))
    f.write("position: absolute; left: %s; top: %s;" %\
            (r.x0-min_x, r.y0-min_y))
    f.write("border: 1px solid #888;")
    intcolors = map(lambda x: int(x*256), r.colors)
    colors256 = map(lambda x: "%02x"%x, intcolors)
    hexcolors = map(lambda x: x.replace('0x', ''), colors256)
    f.write("background-color: #%s%s%s;" % tuple(hexcolors[:-1]))
    f.write("' >")
    f.write("\n")
    f.write( "</div>")
    f.write("\n")

  f.write( "</div>")

  f.close()

if __name__ == "__main__":
  rects = []
  lines = sys.stdin.readlines()
  for line in lines[1:]:
    x,y = line.split()
    rects.append(R(int(x), int(y)))

  s = BruteSolver(rectangles=rects)
  best_area, best_rects = s.place()

  print bounding_area(bounding_box(best_rects))

  to_html(best_rects, "brute")
# vim: foldlevel=1 foldmethod=marker
