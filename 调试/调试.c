#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//调试1！+2！+3！+.....+n！
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret = j*ret;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//陷入死循环的原因是arr[12]和i在同一个地址
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("呵呵\n");
//	}
//	return 0;
//}


//自己写一个代码实现strcpy
#include<assert.h>
char* my_strcpy(char* des,const char * src)
{
	char * p = des;
	assert(des != NULL);//如果出错会报错
	assert(src != NULL);

	while (*des++=*src++)//后置++先解引用再加加，当条件为真就执行，当为‘\0'时候条件为假跳出循环，但是\0复制过去了
	{
		;
	}

	return p;

}

int main()
{
	char s1[] = "############";
	char s2[] = "hehe";
	//my_strcpy(s1, s2);
	printf("%s", my_strcpy(s1, s2));
	return 0;
}


//模拟实现strlen
//#include<assert.h>
//int my_strlen(const char *p)
//{
//	int count = 0;
//	assert(p != NULL);
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//
//}
//int main()
//{
//	char s[] = "heheheh";
//	int len = my_strlen(s);
//	printf("%d", len);
//	return 0;
//}

