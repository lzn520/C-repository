#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//实现棋盘初始化
void Initboard(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}
//   |   |   
//---|---|---
//显示棋盘
void Displayboard(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for(i=0;i<row;i++){
		for (j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1) {
			for (j = 0; j < row; j++) {
				printf("---");
				if (j<col-1) {
					printf("|");
				}
			}
			printf("\n");
			}
			
		}
	}

//玩家下棋
void Playerboard(char board[ROW][COL], int row, int col) {
		while(1){
			if ((row > 0 && row <= 3) && (col > 0 && col <= 3)) {
				if (board[row - 1][col - 1] == ' ') {
					board[row - 1][col - 1] = '*';
					break;
				}
				else {
					printf("该处已经下棋!\n");
					printf("请重新输入坐标:>");
					scanf("%d %d", &row, &col);
					Playerboard(board, row, col);
					break;
				}

			}
			else {
				printf("请输入正确的坐标\n");
				printf("请重新输入坐标:>");
				scanf("%d %d", &row, &col);
				Playerboard(board, row, col);
				break;
			}
		}
	
}
//电脑下棋
void Computerboard(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	while (1) {
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
		}
	
	}
	
	
}
	
char is_win(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++) {
		if ((board[i][0] == board[i][1]) && (board[i][1] == board[i][2])&& board[i][0]!=' ') {
			return board[i][0];
		}
	}
	for (j = 0; j < COL; j++) {
		if ((board[0][j] == board[1][j]) && (board[1][j] == board[2][j])&&board[0][j]!=' ') {
			return board[0][j];
		}
	}
	if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2]) && board[0][0] != ' ') {
		return board[0][0];
	}
	if ((board[0][2] == board[1][1]) && (board[1][1] == board[2][0]) && board[0][2] != ' ') {
		return board[0][0];
	}

	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			if (' '==board[i][j])
				return 'c';
		}
	}

	return 'd';




}

