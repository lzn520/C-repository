#define _CRT_SECURE_NO_WARNINGS 1
#include<math.h>
#include<stdio.h>
int main()
{
	int i = 0;

	for (i = 0; i <= 100000; i++)
	{
		//����i��λ��������Ϊn
		int n = 1;
		int temp = i;
		int sum = 0;
		while (temp /= 10)
		{
			n++;
		}
		//����i��ÿһλ��n�η�֮��
		temp = i;
		while (temp)
		{
			sum += pow(temp % 10,n);
			temp /= 10;
		}
		//�Ƚ�i==sum
		if (sum == i)
		{
			printf("%d ", i);
		}

	}
	return 0;
}