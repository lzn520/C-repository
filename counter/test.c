#define _CRT_SECURE_NO_WARNINGS 1

#include"caculate.h"
void menu()
{
	printf("***   ��ѡ������꼶   ***\n");
	printf("*******  1.һ�꼶  *******\n");
	printf("*******  2.���꼶  *******\n");
	printf("*******  3.���꼶  *******\n");
	printf("*******  0.�˳�    *******\n");
}
void counter_1()
{
	int arr[COL] = { 5 };
	int answer[COL] = { 5 };
	InitAnswer(arr,answer,COL);
	//ShowAnswer(arr, COL);
	ShowQuestion(arr,COL,SUM1);
	//ShowAnswer(arr, COL);
	Answer(answer,COL);
	//ShowAnswer(answer, COL);
	judgeAnswer(arr, answer, COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("���������ѡ�>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			counter_1();
			break;
		case 2:
			printf("���꼶\n");
			break;
		case 3:
			printf("���꼶\n");
			break;
		default:
			printf("�����������������:>\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}