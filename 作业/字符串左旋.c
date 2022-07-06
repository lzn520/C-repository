#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdio.h>
//1.字符串左旋转，暴力求解法
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

//2.三步求解法
//abcdef
//ba fedc//分成两部分先分别逆序
//cdefab//整体进行逆序
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
//	//先逆序要操作的几个字符
//	reverse(p,p+n-1);
//	//逆序剩下的字符
//	reverse(p + n, p + len - 1);
//	//整体进行逆序
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


//判断一个字符串是否是另外一个字符串旋转得到的
//1.穷举法
//int  is_spiral(const char*p1, char*p2)
//{
//	assert(p1, p2);
//	int len = strlen(p2);
//	int i = 0;
//	for (i = 0; i <= len; i++)
//	{
//		left_spiral(p2, i);
//		if (strcmp(p1, p2) == 0)//比较每一次左旋后的字符串是否和目标字符串相同
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


//2.追加法
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



//杨氏矩阵问题
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
	int ret=FindKey(arr, key,&x,&y);//采用返回值参数来带回下标
	if (ret == 1)
	{
		printf("找到了\n");
		printf("坐标是%d %d", x, y);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}