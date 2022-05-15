#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//��ʼ������
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

//��ʾ����
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
//����
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
//�������Ų�ĵ���Χ�ж��ٸ���
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

//�����Χ���ȫ����û��
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

//�ж��Ƿ��ʤ
int is_win(char show[ROWS][COLS], int row, int col)
{
	int count = 0;
	int i = 0;
	int j = 0;
	for (i = 1; i <=row; i++){
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*')//����һ��show���飬���show����ֻ��ʮ��*���ͻ�ʤ��
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
//����
void find_mine(char mine[ROWS][COLS],char show[ROWS][COLS], int  row, int  col)
{
	int x;
	int y;
	int sum = ROW*COL - _MINE;//��Ҫ�Ų���ٸ��ط�����Ӯ
	while (1)
	{
		printf("��������Ҫ���׵�����:>");
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			if (mine[x][y] == '1'){//1.����
				printf("�㱻ը���ˣ���\n");
				displayboard(mine, ROW, COL);
				break;
			}
			else//2.û����
			{
				open_mine(mine, show, x, y);
				displayboard(show, ROW, COL);
				if (1 == is_win(show, ROW, COL)){
					printf("��ϲ�����׳ɹ�����\n");
					displayboard(mine, ROW, COL);
					break;
				}
				
			}

		}
		else
		{
			printf("�����������������\n");
		}
	}
	
	}
