#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdio.h>
//1.�ַ�������ת��������ⷨ
//void reverse(char*p,int n)
//{
//	int i = 0;
//	int j = 0;
//	int len=strlen(p);
//	for (i = 0; i < 2; i++)
//	{
//		char temp = *p;
//		for (j = 0; j < len-1; j++)
//		{
//			*(p + j) = *(p + j + 1);
//		}
//		*(p + j) = temp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 2;
//	reverse(arr, 2);
//	printf("%s", arr);
//	return 0;
//}

//2.������ⷨ
//abcdef
//ba fedc//�ֳ��������ȷֱ�����
//cdefab//�����������
//#include<assert.h>
//void reverse(char*left, char*right)
//{
//	char temp;
//	while (left<right)
//	{
//		temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//
//	}
//}
//left_spiral(char*p, int n)
//{
//	assert(p != NULL);
//	int len = strlen(p);
//	assert(n <= len);
//	//������Ҫ�����ļ����ַ�
//	reverse(p,p+n-1);
//	//����ʣ�µ��ַ�
//	reverse(p + n, p + len - 1);
//	//�����������
//	reverse(p, p + len - 1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int n = 10;
//	left_spiral(arr, n);
//	printf("%s", arr);
//	return 0;
//}


//�ж�һ���ַ����Ƿ�������һ���ַ�����ת�õ���
//1.��ٷ�
//int  is_spiral(const char*p1, char*p2)
//{
//	assert(p1, p2);
//	int len = strlen(p2);
//	int i = 0;
//	for (i = 0; i <= len; i++)
//	{
//		left_spiral(p2, i);
//		if (strcmp(p1, p2) == 0)//�Ƚ�ÿһ����������ַ����Ƿ��Ŀ���ַ�����ͬ
//		{
//			return 1;
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[]= "cdefbe";
//	if (strlen(arr1) >= strlen(arr2))
//	{
//		int ret = is_spiral(arr1, arr2);
//		if (ret == 1)
//		{
//			printf("yes\n");
//		}
//		else
//		{
//			printf("no\n");
//		}
//	}
//	return 0;
//}


//2.׷�ӷ�
//#include<assert.h>
//int is_spiral(char*p1,char*p2)
//{
//	int len = strlen(p1);
//	assert(p1);
//	assert(p2);
//	strncat(p1, p1, len);
//	if (strstr(p1, p2) == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_spiral(arr1,arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}



//���Ͼ�������
int  FindKey(int arr[3][3], int key, int* row, int* col)
{
	int x = 0;
	int y = *col-1;
	while ((x<=*row-1)&&(y>=0))
	{
		if (arr[x][y] > key)
		{
			y--;
		}
		else if (arr[x][y] < key)
		{
			x++;
		}
		else
		{
			*row = x;
			*col = y;
			return 1;
		}
		
	}
}
int main()
{
	int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	int key = 7;
	int x = 3;
	int y = 3;
	int ret=FindKey(arr, key,&x,&y);//���÷���ֵ�����������±�
	if (ret == 1)
	{
		printf("�ҵ���\n");
		printf("������%d %d", x, y);
	}
	else
	{
		printf("�Ҳ���\n");
	}
	return 0;
}