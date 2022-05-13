#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//��ӡ�˵�
void menu() {
	printf("*************************\n");
	printf("*****1.play   0.exit*****\n");
	printf("*************************\n");
}
//��ʼ����Ϸ
void game() {
	char board[ROW][COL] = { 0 };
	int row=0, col=0;
	Initboard(board, ROW, COL);
	Displayboard(board, ROW, COL);
	while (1) {
	//�������
		printf("�����:>");
		printf("����������:>");
		scanf("%d%d", &row, &col);
		Playerboard(board, row, col);
		Displayboard(board, ROW, COL);
		if ('*' == is_win(board, ROW, COL)) {
			printf("��Ӯ�ˣ�\n");
			break;
		}
		else if ('d' == is_win(board, ROW, COL)) {
			printf("ƽ�֣�\n");
			break;
		}
		else {
			printf("��������\n");
		}
		
	
	//��������
		printf("��������:>\n");
		Computerboard(board, ROW, COL);
		Displayboard(board, ROW, COL);
		if ('#' == is_win(board, ROW, COL)) {
			printf("����Ӯ�ˣ�\n");
			break;
		}
		else if ('d' == is_win(board, ROW, COL)) {
			printf("ƽ�֣�\n");
			break;
		}
		else {
			printf("��������\n");
		}
	}
		
		
	
}
void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("���������ѡ��:>\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		
		}
	
	} while (input);


}
int main() {
	test();
	return 0;
}