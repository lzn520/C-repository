#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int len = 0;
	int i = 0;
	scanf("%d", &len);
	//�������ִ�ӡ���ϰ벿�ֺ��°벿��
	for (i = 0; i < len; i++)
	{
		int j = 0;
		//��ӡ�ո�
		for (j = 0; j <len-1-i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//��ӡ�°벿��
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