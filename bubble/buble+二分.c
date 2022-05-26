#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
scanf_(int* p, int sz)
{
	int i = 0;
	printf("请输入您要输入的十个数字：\n");
	for (i = 0; i < sz; i++)
	{
		scanf("%d", p + i);
	}
}

//查看数组
void print_(int* p, int sz)
{
	int i = 0;
	printf("查看输入的十个数字\n");
	for (i = 0; i < sz; i++)
	{
	printf("%d ", *(p + i));
	}
	printf("\n");
}

//冒泡排序
void buble(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	int temp;
	for (i = 0; i < sz; i++)
	{
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] >arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	}

}

//二分法查找输入的数字下标
int search(int arr[], int sz,int n)
{

	int left = 0;
	int right = sz - 1;
	int mid = (left + right) / 2;
	while (left < right)
	{
		mid = (left + right) / 2;
		if (arr[mid]>n)
		{
			right = mid - 1;
		}
		else if (arr[mid]<n)
		{
			left = mid + 1;

		}
		else{
			return mid;
		}
	}
	if (left = right)
	{
		return 0;
	}
}

int main()
{
	int n;
	int num = 0;
	int arr[10];
	int sz = sizeof(arr) / sizeof(arr[0]);
	scanf_(arr, sz);
	print_(arr, sz);
	buble(arr, sz);
	print_(arr, sz);
	printf("输入你要查找的数字\n");
	scanf("%d", &n);
	num = search(arr, sz, n);
	if (1 == num)
	{
		printf("找到了下标为%d\n", num);
	}
	else{
		printf("找不到\n");
	}
	return 0;
}