#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("****************************\n");
	printf("*****  ��ӭ����ɨ����Ϸ ****\n");
	printf("*****    ѡ��ɨ��ģʽ   ****\n");
	printf("*********  1.�ͼ� **********\n");
	printf("*********  2.�м� **********\n");
	printf("*********  3.�߼� **********\n");
	printf("*********  0.�˳� **********\n");
	printf("****************************\n");
}

void primary_game()
{
	//�������̣�һ����������׵���Ϣ��һ������չʾ
	char show[ROWS][COLS] = { '0'};
	char mine[ROWS][COLS] = { '0'};
	//��ʼ������
	Initboard(show, ROWS, COLS,'*');
	Initboard(mine, ROWS, COLS, '0');
	//��ʾ����
	//displayboard(mine, ROW, COL);
	displayboard(show, ROW, COL);
	//����
	put_mine(mine, ROW, COL);
	//displayboard(mine, ROW, COL);
	//����
	find_mine(mine,show, ROW, COL);

}

void middle_game(){
	printf("�м�\n");//ûд

}
void test()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("���������ѡ��:>");
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
			printf("�߼�\n");
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		
		}
	} while (input);


}
int main()
{
	test();
	return 0;
}
