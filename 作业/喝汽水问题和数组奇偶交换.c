#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int sum = money;//多少钱就可以先喝多少瓶
//	int bottle = money;//喝掉多少就有多少个瓶子
//	while (bottle >= 2)
//	{
//		sum += bottle / 2;
//		bottle = bottle % 2 + bottle / 2;//换来的饮料喝掉的瓶子+剩下的瓶子
//	}
//	printf("总共可以喝：%d", sum);
//	return 0;
//}



//调整数组的顺序，使得奇数位于前面，偶数位于后面

void change(int*left, int sz)
{
	//int* left = arr;
	int* right = left + sz - 1;
	while (left<right)
	{
		//首先从前面开始找一个偶数
		while ((left<right) && (*left % 2 != 0))//防止全是奇数的时候，指针越界访问
		{
			left++;
		}
		//然后开始从后面找一个奇数
		while ((left<right)&&(*right % 2 == 0))//防止全是偶数的时候，指针越界访问
		{
			right--;
		}
		//交换他们的位置
		if (left<right)//必须要left<right才可以交换
		{
			int temp = *left;
			*left = *right;
			*right = temp;
		}
	}
	
}
void print(int*p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	change(arr, sz);
	print(arr, sz);
	return 0;
}