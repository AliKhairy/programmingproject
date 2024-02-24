#include <stdio.h>

typedef struct size_struct
{
    int row, column;
    int playerX, playerY;
    char maze[100][100]; 
}size;

char input;

// Read from file and store width and height from file to struct vars
void readFile(char* filename, size sizeVar) {

}

//and check if they are within the limits.
int validLenghts(size sizeVar) {

}

// Movement menu (W, A, S, D) including the map (M)
char menu(){

}

// Take user input and do movement or map depending on input
char takeInput(char input) {

}

// take coords of E, and check, when at those coords, maze[][] = X
int isDone(){

}

// When W, update maze[row][column] accordingly
void w(size sizeArray, int row, int column){

}

// When S, update maze[row][column] accordingly
void s(size sizeArray, int row, int column){

}

// When A, update maze[row][column] accordingly
void a(size sizeArray, int row, int column){

}

// When D, update maze[row][column] accordingly
void d(size sizeArray, int row, int column) {

}

// Implement movement
void movement(size sizeArray, int row, int column){

}

// Make sure player doesnt go outside the maze (can move along the borders).
// Checking if player out of bounds.
int isInside(size sizeArray, int playerX, int playerY) {

}
// Check if player hit a wall or not
int hitWall(size sizeArray, int playerX, int playerY){

}

// Map where player is represented by a X
char map() {

}


int main(int argc, char* argv[]) {
  size sz;
  if(argc > 1) {
    char* fileName = argv[1]; 
    readFile(fileName, sz);
    if (!validLenghts(sz))
    {
      printf("Measurements aren't valid.");
    }
  
  } else {printf("Must input a file. Usage: ./maze <filename>");}
  

  while(!isDone()){
    menu();
    printf("Choose one of the options: ");
    takeInput(input);
    if (hitWall(sz, sz.playerX, sz.playerY))
    {
      printf("Thou has hit a wall. Please rechoose an option.");
    }
    if (!isInside(sz, sz.playerX, sz.playerY))
    {
      printf("Thou tried to leave the maze. Please rechoose an option.");
    }
    
  }
  printf("Well done, thou has completed the maze.");
  

}