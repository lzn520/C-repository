#define _CRT_SECURE_NO_WARNINGS 1

#include"caculate.h"
void menu()
{
	printf("***   请选择你的年级   ***\n");
	printf("*******  1.一年级  *******\n");
	printf("*******  2.二年级  *******\n");
	printf("*******  3.三年级  *******\n");
	printf("*******  0.退出    *******\n");
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
		printf("请输入你的选项：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			counter_1();
			break;
		case 2:
			printf("二年级\n");
			break;
		case 3:
			printf("三年级\n");
			break;
		default:
			printf("输入错误请重新输入:>\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}