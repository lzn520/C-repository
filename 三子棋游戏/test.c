#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//打印菜单
void menu() {
	printf("*************************\n");
	printf("*****1.play   0.exit*****\n");
	printf("*************************\n");
}
//开始玩游戏
void game() {
	char board[ROW][COL] = { 0 };
	int row=0, col=0;
	Initboard(board, ROW, COL);
	Displayboard(board, ROW, COL);
	while (1) {
	//玩家下棋
		printf("玩家下:>");
		printf("请输入坐标:>");
		scanf("%d%d", &row, &col);
		Playerboard(board, row, col);
		Displayboard(board, ROW, COL);
		if ('*' == is_win(board, ROW, COL)) {
			printf("你赢了！\n");
			break;
		}
		else if ('d' == is_win(board, ROW, COL)) {
			printf("平局！\n");
			break;
		}
		else {
			printf("继续！！\n");
		}
		
	
	//电脑下棋
		printf("电脑下棋:>\n");
		Computerboard(board, ROW, COL);
		Displayboard(board, ROW, COL);
		if ('#' == is_win(board, ROW, COL)) {
			printf("电脑赢了！\n");
			break;
		}
		else if ('d' == is_win(board, ROW, COL)) {
			printf("平局！\n");
			break;
		}
		else {
			printf("继续！！\n");
		}
	}
		
		
	
}
void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请输入你的选择:>\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		
		}
	
	} while (input);


}
int main() {
	test();
	return 0;
}