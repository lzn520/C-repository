#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//
//	return 0;
//
//}

/*
  char * ch //�ַ�ָ��
  char * ch[10]//ָ�����飬һ��������Ϊch�����飬���Դ洢ʮ������Ϊchar*��ָ��
  int (*p)[5]//����ָ�� ָ����Ϊp�������洢�����СΪ5����������Ϊint������ĵ�ַ ��һ�����ڶ�ά����ŷ���
*/
//void  print1(int arr[3][3], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[3], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
//	//print1(arr,3,3);
//	print2(arr, 3, 3);
//	return 0;
//}


//ת�Ʊ�
//void menu()
//{
//	printf("**********************\n");
//	printf("***1.Add    2.Sub  ***\n");
//	printf("***3.Mul    4.Div  ***\n");
//	printf("***    0.�˳�      ***\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x*y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//
//	int(*print[5])(int, int) = {0,Add,Sub,Mul,Div};
//	int input=0;
//	int x, y;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		if (input >=1 && input<=4)
//		{
//			printf("������������\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", print[input](x, y));
//		}
//		else if (input != 0)
//		{
//			printf("�����������������\n");
//		}
//
//	} while (input);
//
//
//	return 0;
//}

//ָ���������������
int main()
{
	//һά����
	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a));//16  sizeof(a)��ʾ��������Ĵ�С
	//printf("%d\n", sizeof(a + 0));//4/8  a�������ʾ��Ԫ�صĵ�ַ��a+0��ʾ��Ԫ�صĵ�ַ����ַ��СΪ4/8���ֽ�
	//printf("%d\n", sizeof(*a));//4 *a��ʾ����Ԫ�ؽ����ã���Ԫ�صĴ�СΪ4���ֽ�
	//printf("%d\n", sizeof(a + 1));//4/8  ��Ԫ�ص�ַ+1��ʾa[1]�ĵ�ַ����ַ��СΪ4/8
	//printf("%d\n", sizeof(a[1]));//4  �ڶ���Ԫ�صĴ�С��a[1]�Ĵ�СΪ4���ֽ�
	//printf("%d\n", sizeof(&a));//4/8  &aȡ����������������ĵ�ַ������ĵ�ַ��СΪ4/8���ֽ�
	//printf("%d\n", sizeof(*&a));//16 &��*�պõ�����ȡ������������ĵ�ַ��Ȼ����������õõ�������������
	//printf("%d\n", sizeof(&a + 1));//4/8  &a+1��������������ĵ�ַ����ַ��С4/8
	//printf("%d\n", sizeof(&a[0]));//4/8  
	//printf("%d\n", sizeof(&a[0] + 1));//4/8  a[1]�ĵ�ַ

	//�ַ�����
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", sizeof(arr));//6  �������������Ĵ�С����λΪ�ֽ�
	printf("%d\n", sizeof(arr + 0));//4/8  arr+0��ʾ��Ԫ�صĵ�ַ����ַ��СΪ4/8
	printf("%d\n", sizeof(*arr));//1 *arr��ʾ����Ԫ�ص�ַ�����ã�����ŵ�Ԫ�ش�СΪ1���ֽ�
	printf("%d\n", sizeof(arr[1]));//1 �ڶ���Ԫ�صĴ�С
	printf("%d\n", sizeof(&arr));//4/8 &arrȡ����������������ĵ�ַ����ַ��СΪ4/8
	printf("%d\n", sizeof(&arr + 1));//4/8 ������������ĵ�ַ�Ĵ�С
	printf("%d\n", sizeof(&arr[0] + 1));//4/8 �ڶ���Ԫ�ص�ַ�Ĵ�С

	//strlen�����ַ������ȣ�����Ҫ����һ����ַ���Ӹõ�ַ��ʼ����ң�ֱ������/0����
	printf("%d\n", strlen(arr));//strlen(arr)��ʾ����Ԫ�ص�ַ��ʼ����ң����Ǹ������ڲ�û��\0�����Ի���һ�����ֵ
	printf("%d\n", strlen(arr + 0));//���ֵ  ����Ԫ�ؿ�ʼ�����
	printf("%d\n", strlen(*arr));//err *arr��֪Ϊ'a',��ASCII��ֵΪ97���൱�ڰ�97����һ����ַ��ʼ����ң����ǻᱨ��
	printf("%d\n", strlen(arr[1]));//err ͬ����
	printf("%d\n", strlen(&arr));//���ֵ &arrȡ����������ĵ�ַ������ĵ�ַ����ָ������Ŀ�ͷ
	printf("%d\n", strlen(&arr + 1));//���ֵ ����һ�������飬Ȼ������ң����ǵõ�һ�����ֵ,���Ǳ�������Ǹ����ֵС6
	printf("%d\n", strlen(&arr[0] + 1));//���ֵ ��arr[1]�ĵ�ַ��ʼ����ң��ȵ������������ֵС1
	return 0;
}

