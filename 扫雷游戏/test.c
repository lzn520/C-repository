#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("****************************\n");
	printf("*****  欢迎来到扫雷游戏 ****\n");
	printf("*****    选择扫雷模式   ****\n");
	printf("*********  1.低级 **********\n");
	printf("*********  2.中级 **********\n");
	printf("*********  3.高级 **********\n");
	printf("*********  0.退出 **********\n");
	printf("****************************\n");
}

void primary_game()
{
	//两个棋盘，一个用来存放雷的信息，一个用来展示
	char show[ROWS][COLS] = { '0'};
	char mine[ROWS][COLS] = { '0'};
	//初始化棋盘
	Initboard(show, ROWS, COLS,'*');
	Initboard(mine, ROWS, COLS, '0');
	//显示棋盘
	//displayboard(mine, ROW, COL);
	displayboard(show, ROW, COL);
	//埋雷
	put_mine(mine, ROW, COL);
	//displayboard(mine, ROW, COL);
	//排雷
	find_mine(mine,show, ROW, COL);

}

void middle_game(){
	printf("中级\n");//没写

}
void test()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入你的选项:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			primary_game();
			break;
		case 2:
			middle_game();
			break;
		case 3:
			printf("高级\n");
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误请重新输入！\n");
			break;
		
		}
	} while (input);


}
int main()
{
	test();
	return 0;
}
