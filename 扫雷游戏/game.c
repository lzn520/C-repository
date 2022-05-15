#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//初始化棋盘
void Initboard(char board[ROWS][COLS], int row, int col,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
	}
}

//显示棋盘
void displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 1;
	int j = 1;
	for (i = 0; i <= col; i++){
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}

}
//埋雷
void put_mine(char board[ROWS][COLS], int row, int col)
{
	int count = _MINE;
	int x = 0;
	int y = 0;
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (board[x][y] != '1'){
			board[x][y] = '1';
			count--;
		}
	}
}
//计算你排查的点周围有多少个雷
int count_mine(char board[ROWS][COLS], int x, int y)
{
	int i;
	int j;
	int count=0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			count = board[i][j]-'0'+count;

		}
	}
	return count;

}

//检查周围如果全部都没雷
void open_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int count = count_mine(mine, x, y);
	if (count == 0){
		show[x][y] = '0';
		for (i = x - 1; i <= x + 1; i++)
		{
			for (j = y - 1; j <= y + 1; j++)
			{
				if (show[i][j] == '*' && i > 0  &&  i<10  &&  j>0  &&  j < 10)
				{
					open_mine(mine, show, i, j);
					
				}
				
			}
		}
	}
	else
	{
		show[x][y] = count + '0';
	}

}

//判断是否获胜
int is_win(char show[ROWS][COLS], int row, int col)
{
	int count = 0;
	int i = 0;
	int j = 0;
	for (i = 1; i <=row; i++){
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*')//遍历一遍show数组，如果show数组只有十个*，就获胜了
				count++;
		}
	}
	if (count == _MINE)
	{
		
		return 1;
	}
	else
	{
		return 0;
	}

}
//排雷
void find_mine(char mine[ROWS][COLS],char show[ROWS][COLS], int  row, int  col)
{
	int x;
	int y;
	int sum = ROW*COL - _MINE;//需要排查多少个地方才能赢
	while (1)
	{
		printf("请输入你要排雷的坐标:>");
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			if (mine[x][y] == '1'){//1.踩雷
				printf("你被炸死了！！\n");
				displayboard(mine, ROW, COL);
				break;
			}
			else//2.没踩雷
			{
				open_mine(mine, show, x, y);
				displayboard(show, ROW, COL);
				if (1 == is_win(show, ROW, COL)){
					printf("恭喜你排雷成功！！\n");
					displayboard(mine, ROW, COL);
					break;
				}
				
			}

		}
		else
		{
			printf("输入错误请重新输入\n");
		}
	}
	
	}
