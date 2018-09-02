#include "maze.h"
#include <iostream>
using namespace std;

bool escapeMaze(Maze& maze, int row, int col);

int main() {
  return 0;
}


/*
 * Tries to find a way to escape from the given maze, starting
 * from the given row/column location.
 * Rturns true if it finds a way out, or false if not.
 */
bool escapeMaze(Maze& maze, int row, int col) {
  if (!maze.inBounds(row, col)) {
    return true;
  } else if (maze.isWall(row, col)) {
    return false;
  } else if (maze.isOpen(row, col)) {
    // choose
    maze.mark(row, col);

    // explore
    bool result = escapeMaze(maze, row - 1, col)   // up
               || escapeMaze(maze, row + 1, col)   // down
               || escapeMaze(maze, row, col + 1)   // right
               || escapeMaze(maze, row, col - 1);  // left

    // un-choose
    if (!result) {
      maze.taint(row, col);
    }

    return result;

  } else {
    return false;
  }
}
