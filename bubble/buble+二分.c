#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
scanf_(int* p, int sz)
{
	int i = 0;
	printf("��������Ҫ�����ʮ�����֣�\n");
	for (i = 0; i < sz; i++)
	{
		scanf("%d", p + i);
	}
}

//�鿴����
void print_(int* p, int sz)
{
	int i = 0;
	printf("�鿴�����ʮ������\n");
	for (i = 0; i < sz; i++)
	{
	printf("%d ", *(p + i));
	}
	printf("\n");
}

//ð������
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

//���ַ���������������±�
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
	printf("������Ҫ���ҵ�����\n");
	scanf("%d", &n);
	num = search(arr, sz, n);
	if (1 == num)
	{
		printf("�ҵ����±�Ϊ%d\n", num);
	}
	else{
		printf("�Ҳ���\n");
	}
	return 0;
}