#pragma once
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Initboard(char board[ROW][COL], int row, int col);
void Displayboard(char board[ROW][COL], int row, int col);
void Playerboard(char board[ROW][COL], int row, int col);
void Computerboard(char board[ROW][COL], int row, int col);
char is_win(char board[ROW][COL], int row, int col);