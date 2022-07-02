#define _CRT_SECURE_NO_WARNINGS 1
#include<math.h>
#include<stdio.h>
int main()
{
	int i = 0;

	for (i = 0; i <= 100000; i++)
	{
		//计算i的位数，假设为n
		int n = 1;
		int temp = i;
		int sum = 0;
		while (temp /= 10)
		{
			n++;
		}
		//计算i的每一位的n次方之和
		temp = i;
		while (temp)
		{
			sum += pow(temp % 10,n);
			temp /= 10;
		}
		//比较i==sum
		if (sum == i)
		{
			printf("%d ", i);
		}

	}
	return 0;
}