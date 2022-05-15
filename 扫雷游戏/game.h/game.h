#define ROWS 11
#define COLS 11
#define ROW 9
#define COL 9
#define _MINE 10
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void Initboard(char board[ROWS][COLS], int rows, int  cols,char set);
void displayboard(char board[ROWS][COLS],int  row, int col);
void put_mine(char board[ROWS][COLS], int  row, int  col);
void find_mine(char board[ROWS][COLS], char show[ROWS][COLS],int  row, int  col);
int  count_mine(char board[ROWS][COLS], int x,int y);