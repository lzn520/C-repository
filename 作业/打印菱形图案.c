#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int len = 0;
	int i = 0;
	scanf("%d", &len);
	//分两部分打印，上半部分和下半部分
	for (i = 0; i < len; i++)
	{
		int j = 0;
		//打印空格
		for (j = 0; j <len-1-i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//打印下半部分
	for (i = 0; i < len - 1; i++)
	{
		int j = 0;
		for (j = 0; j <i+1; j++)
		{
			printf(" ");
		}
		for (j = 0; j <2*(len-1-i)-1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
   /*   *
     ***
	*****
   *******
  *********
 ***********
**************
 ************/