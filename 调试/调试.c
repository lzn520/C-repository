#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����1��+2��+3��+.....+n��
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

//������ѭ����ԭ����arr[12]��i��ͬһ����ַ
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("�Ǻ�\n");
//	}
//	return 0;
//}


//�Լ�дһ������ʵ��strcpy
#include<assert.h>
char* my_strcpy(char* des,const char * src)
{
	char * p = des;
	assert(des != NULL);//�������ᱨ��
	assert(src != NULL);

	while (*des++=*src++)//����++�Ƚ������ټӼӣ�������Ϊ���ִ�У���Ϊ��\0'ʱ������Ϊ������ѭ��������\0���ƹ�ȥ��
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


//ģ��ʵ��strlen
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

