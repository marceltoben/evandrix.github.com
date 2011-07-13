# ASCII Maze solver
# From http://thinkcode.tv/free
# Copyright (C) 2010 ThinkCode Labs, Inc.
# Released under the terms of the MIT license.

PATH, START, EXIT, VISITED, SOLUTION = ' SE.o'
class Maze():
    def __init__(self, ascii_maze):
        self.maze = [list(x) for x in ascii_maze.splitlines()]
        self.start_y = [row.count(START) for row in self.maze].index(1)
        self.start_x = self.maze[self.start_y].index(START)

    def __repr__(self):
        return "\n".join("".join(line) for line in self.maze)

    def solve(self, x = None, y = None):
        if x == None:
            x, y = self.start_x, self.start_y
        if self.maze[y][x] in (PATH, START):
            self.maze[y][x] = VISITED
            if (self.solve(x+1, y) or self.solve(x-1, y) or
                self.solve(x, y+1) or self.solve(x, y-1)):
                self.maze[y][x] = SOLUTION
                return True
        elif self.maze[y][x] == EXIT:
            return True
        return False

ASCII_MAZE = """
+-------------+
|     |   | | |
| | +-+ --+ | |
| | |       | |
| |   +-- | | |
| | | |   | | E
|   | | | | | |
+---+ | | | | |
S     | | |   |
+-----+-+-+---+
"""

if __name__ == "__main__":
    import sys
    sys.setrecursionlimit(10000)
    if len(sys.argv) > 1:
        maze = Maze(open(sys.argv[1]).read())
    else:
        maze = Maze(ASCII_MAZE)
    if maze.solve():
        print maze
