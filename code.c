#include <stdio.h>

typedef struct size_struct
{
    int row;
    int column;
    int playerX, playerY;
    char maze[][]; 
}size;

//2d parallel array to mark if a cell is visited or not
int visited[][];

char input;

// Read from file and store width and height from file to struct vars
void readFile(char* filename, size sizeVar){

}

// The thought process of making a maze has been inspired 
// by Claude 2 with the prompt: 'do u have an
// idea on how im suppose to generate a maze in C'

// set all cells to be '#' and mark all cells unvisited
void wall(size sizeArray) {

}

// Set the starting point by choosing a random point in 
// the borders and initializing player starting
// coordinates.
void startingPoint(size sizeArray) {

}

// Go to random neighbour cell and replace with space
void nextCell(size sizeArray, int row, int column){

}

// Mark that a cell is visited
void isVisited(int isVisited[][], int row, int column){

}

// Check if a cell is visited or not
int checkVisit(size sizeArray, int row, int column){

}

// Check if neighbour cells are unvisited so that E is placeable when all
// neighbour cells are visited when we're on the borders
int isNeighbourUnvisited(size sizeArray, int playerX, int playerY){

}

// Choose a random direction and replace '#' with ' '
// (only if unvisited) to clear up space for a maze
// and mark the exit 'E'
void replaceTags(size sizeArray, int row, int column) {

}



// Movement menu (W, A, S, D) including the map (M)
char menu(){

}

// Take user input.
char takeInput() {

}

// Detect when reached E
int isDone(){

}

// Implement movement by updating the maze[][] to an X
void movement(size sizeArray, int row, int column){

}

// Make sure player doesnt go outside the maze (can move along the borders).
// Checking if player out of bounds.
int isInside(size sizeArray, int playerX, int playerY) {

}
//Check if player hit a wall or not
int hitWall(size sizeArray, int playerX, int playerY){

}

// Map
char map() {

}


int main(int argc, char* argv[]) {
  size sz;
  if(argc > 1) {
    char* fileName = argv[1]; 
    readFile(fileName, sz); 
  } else {printf("Must input a file. Usage: ./maze <filename>");}
  wall(sz);
  startingPoint(sz);
}