#define _CRT_SECURE_NO_WARNINGS 1
#include"caculate.h"
//��ʼ���ش�
void InitAnswer(int arr[COL],int answer[COL],int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		arr[i] = 0;
		answer[i] = 0;
	}

}
//show�ش�
void ShowAnswer(int arr[COL], int n)
{
	int i = 0;
	printf("1-10��Ŀ�Ĵ𰸷ֱ�Ϊ\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//����
void ShowQuestion(int arr[COL], int n,int sum)
{
	int i = 0;
	int x = 0;
	int y = 0;
	for (i = 0; i < 5; i++)
	{
		x = (rand() % SUM1 + 1);
		y = (rand() % SUM1 + 1);
		arr[i] = x + y;
		printf("%d+%d= \n", x, y);
	}
	for (i = 5; i < n; i++)
	{
		x = (rand() % SUM1 + 1);
		y = (rand() % SUM1 + 1);
		if (x>y)                   //�����Ϊ����
		{
			arr[i] = x - y;
			printf("%d-%d= \n", x, y);
		}
		else
		{
			arr[i] = y - x;
			printf("%d-%d= \n", y, x);
		}

	}
	
}
//�����
void Answer(int answer[COL], int n)
{
	int i = 0;
	printf("��������Ĵ�\n");
	for (i = 0; i < n; i++)
	{   
		printf("%d.",i+1);
		scanf("%d", &answer[i]);
	}
}
//��֤��
void judgeAnswer(int arr[COL], int answer[COL], int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] == answer[i])
		{
			count += 10;
		}
	}
	printf("��ĵ÷�Ϊ%d\n", count);
}