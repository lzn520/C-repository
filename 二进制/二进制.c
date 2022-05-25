#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求一个数的二进制有多少个1
//111111111111111111111111111111111111
//方法一：缺点是必须要循环32次
//int print_count(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//方法2
//int print_count(int n)
//{
//	int i = 0;
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	
//	return count;
//}

//1101 n
//1100 n-1
//1100 n
//1011 n-1
//1000
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count=print_count(n);
//	printf("count=%d", count);
//	return 0;
//}

//求两个数二进制位不同位的个数
//int count_(int x, int y)
//{
//	int count = 0;
//	int temp = x^y;
//	while (temp)
//	{
//		temp = temp&(temp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int x = 0, y = 0;
//	scanf("%d%d", &x, &y);
//	int count = count_(x, y);
//	printf("count=%d", count);
//	return 0;
//}


//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出
//00000000000000000000000000001011
//31                          3210分别为第几位
void print(int n)
{
	int i = 0;
	//打印奇数位
	for (i = 31; i > 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	i = 0;
	//打印偶数位置
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}

}
int main()
{
	int n;
	scanf("%d", &n);
	print(n);

	return 0;
}
