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
  char * ch //字符指针
  char * ch[10]//指针数组，一个数组名为ch的数组，可以存储十个类型为char*的指针
  int (*p)[5]//数组指针 指针名为p，用来存储数组大小为5，数组类型为int的数组的地址 ，一般用在二维数组才方便
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


//转移表
//void menu()
//{
//	printf("**********************\n");
//	printf("***1.Add    2.Sub  ***\n");
//	printf("***3.Mul    4.Div  ***\n");
//	printf("***    0.退出      ***\n");
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
//			printf("输入两个数字\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", print[input](x, y));
//		}
//		else if (input != 0)
//		{
//			printf("输入错误请重新输入\n");
//		}
//
//	} while (input);
//
//
//	return 0;
//}

//指针和数组笔试题解析
int main()
{
	//一维数组
	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a));//16  sizeof(a)表示计算数组的大小
	//printf("%d\n", sizeof(a + 0));//4/8  a在这里表示首元素的地址，a+0表示首元素的地址，地址大小为4/8个字节
	//printf("%d\n", sizeof(*a));//4 *a表示对首元素解引用，首元素的大小为4个字节
	//printf("%d\n", sizeof(a + 1));//4/8  首元素地址+1表示a[1]的地址，地址大小为4/8
	//printf("%d\n", sizeof(a[1]));//4  第二个元素的大小，a[1]的大小为4个字节
	//printf("%d\n", sizeof(&a));//4/8  &a取出来的是整个数组的地址，数组的地址大小为4/8个字节
	//printf("%d\n", sizeof(*&a));//16 &和*刚好抵消，取出来整个数组的地址，然后对它解引用得到的是整个数组
	//printf("%d\n", sizeof(&a + 1));//4/8  &a+1是跳过整个数组的地址，地址大小4/8
	//printf("%d\n", sizeof(&a[0]));//4/8  
	//printf("%d\n", sizeof(&a[0] + 1));//4/8  a[1]的地址

	//字符数组
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", sizeof(arr));//6  求的是整个数组的大小，单位为字节
	printf("%d\n", sizeof(arr + 0));//4/8  arr+0表示首元素的地址，地址大小为4/8
	printf("%d\n", sizeof(*arr));//1 *arr表示对首元素地址解引用，里面放的元素大小为1个字节
	printf("%d\n", sizeof(arr[1]));//1 第二个元素的大小
	printf("%d\n", sizeof(&arr));//4/8 &arr取出来的是整个数组的地址，地址大小为4/8
	printf("%d\n", sizeof(&arr + 1));//4/8 跳过整个数组的地址的大小
	printf("%d\n", sizeof(&arr[0] + 1));//4/8 第二个元素地址的大小

	//strlen是求字符串长度，参数要求传入一个地址，从该地址开始向后找，直到遇见/0结束
	printf("%d\n", strlen(arr));//strlen(arr)表示从首元素地址开始向后找，但是该数组内并没有\0，所以会获得一个随机值
	printf("%d\n", strlen(arr + 0));//随机值  从首元素开始向后找
	printf("%d\n", strlen(*arr));//err *arr得知为'a',其ASCII码值为97，相当于把97当作一个地址开始向后找，但是会报错
	printf("%d\n", strlen(arr[1]));//err 同上理
	printf("%d\n", strlen(&arr));//随机值 &arr取出整个数组的地址，数组的地址还是指向数组的开头
	printf("%d\n", strlen(&arr + 1));//随机值 跳过一整个数组，然后向后找，还是得到一个随机值,但是比上面的那个随机值小6
	printf("%d\n", strlen(&arr[0] + 1));//随机值 从arr[1]的地址开始向后找，比倒数第三个随机值小1
	return 0;
}

