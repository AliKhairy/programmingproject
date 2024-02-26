#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

struct maze
{
  int width, height;
  int playerX, playerY;
  char **maze;
};

// Check if width and height are within the limits, and also check if not a rectangle.
bool validLenghts(struct maze *maze)
{
  if (maze->height > 100 || maze->height < 5 || maze->width > 100 || maze->width < 5)
  {
    return false;
  }
  // And also check if its not a rectangle

  return true;
}

// Read from file and store width and height from file to struct vars
void readFile(char *filename, struct maze *maze)
{
  FILE *file = fopen(filename, "r");
  if (file == NULL)
  {
    printf("File couldn't open.\n");
    exit(1);
  }
  else {
    printf("File loaded successfully.\n");
  }
  // Get width and height, if there isn't a maze, give an error

  // Check if measurements are fine
  if (!validLenghts(maze))
  {
    printf("Measurements of the maze aren't valid.");
    return;
  }

  // Dynamically allocate width and height to maze[][]

  // Read the maze into the array
}

// Find the starting point and set playerX and playerY to them
void startingPoint(struct maze *maze)
{
}

// Movement menu (W, A, S, D) including the map (M)
char menu()
{
}

// Take user input and do movement or map depending on input
char takeInput(char input)
{
}

// take coords of E, and check, when at those coords, maze[][] = X
bool isDone()
{
}

// Map where player is represented by a X
char map()
{
}

// Implement movement (put an X at current coords) and check if it hits a wall or left the map
void movement(struct maze *maze, char move)
{
  int newX = maze->playerX;
  int newY = maze->playerY;

  switch (tolower(move))
  {
  case 'a':
    //code
    break;

  case 'w':
    //code
    break;

  case 's':
    //code
    break;

  case 'd':
    //code
    break;

  case 'm':
    map();
    break;

  default:
    printf("Wrong input, please reinput.\n");
    break;
  }

  // Check if hit a wall or outside of map

  // Update new to player
}

// Make sure player doesnt go outside the maze (can move along the borders).
// Checking if player out of bounds.
bool isInside(struct maze *maze, int playerX, int playerY)
{
}
// Check if player hit a wall or not
bool hitWall(struct maze *maze, int playerX, int playerY)
{
}

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    printf("Usage: ./maze <filename>\n");
    return 1;
  }
  struct maze maze;
    {
      char *fileName = argv[1];
      readFile(fileName, &maze);
    }
  while (!isDone())
  {
    menu();
    printf("Choose one of the options: ");
    char move;
    takeInput(move);
    movement(&maze, move);
  }
  printf("Well done, thou has completed the maze.");
  
  // Free the allocation
}