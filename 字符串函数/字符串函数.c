#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//ʵ�����ַ������Ⱥ���
//1.���ü���������
int my_strlen(const char * p)//���ܱ��ı䣬����const
{
	assert(p);//�����ȶ��ԣ��ж�ָ�����Ч��
	int count = 0;
	while (*p != '\0')
	{
		count++;
		p++;
	}
	return count;
}

//2.���õݹ�ķ����������ܴ�����ʱ�����ķ���
int my_strlen2(char* p)
{
	if (*p != '\0')
	{
		return 1 + my_strlen2(++p);
	}
	else
	{
		return 0;
	}
}

//3.����ָ���ȥָ��
int my_strlen3(char*p)
{
	char* p2 = p;
	/*while (*p)
	{
		p++;
	}
	return p - p2;*/
	//����
	while (*p++);//�Ƚ�������++��ֱ��ָ��\0,����ѭ��
	return p - 1 - p2;
}

//ʵ���ַ������ƺ���
char* my_strcpy(char* des,const char* src)//��des��ʼcpy��ȥ��ֱ��������src��\0�Ž���
{
	assert(des);
	assert(src);
	char* ret = des;
	while (*des++ = *src++);
	return ret;
}

//ʵ���ַ������Ӻ���
char* my_strcat(char* des,const char* src)//�ַ������ӣ�����Ҫ�ҵ�des��\0�Ӵ˿�ʼ����
{
	assert(des);
	assert(src);
	char* ret = des;
	/*while (*des)
	des++;*///��desָ��\0

	//����д��
	/*while (*des++);
	des--;*///��Ϊdes�ڽ�����Ϊ\0��ʱ�򲻻���ѭ�������ǻ��ǻ��������++�������ָ��\0����Ŀռ䣬����Ҫ--��ָ��\0
	while (*des++ = *src++);
	return ret;

}

//ʵ���ַ����ȽϺ���
int my_strcmp(const char*des,const char* src)
{
	assert(des);
	assert(src);
	while (*des == *src)
	{
		des++;
		src++;
	}
	return *des - *src;//���*des>*src����һ��>0������

}

//ʵ��n���ַ�������
char* my_strncat(char* des, const char* src,int n)//�ַ������ӣ�����Ҫ�ҵ�des��\0�Ӵ˿�ʼ����
{
	assert(des);
	assert(src);
	char* ret = des;
	while (*des)
	des++;

	while (*des++ = *src++);
	return ret;

}


//ʵ�����ַ������ң��Ҳ������ؿ�ָ�룬�ҵ��˷��ز��ҵ��ַ�����ʼƥ��ĵ�ַ

char* my_strstr(const char* des,const char* src)
{
	char* p1 = NULL;
	char* p2 = NULL;
	char* ret=(char*)des;
	if (!*src)
	{
		return (char*)des;
	}
	while (*ret)
	{
		p1 = ret;
		p2 = (char*)src;
		while (*p2&&*p1&&(*p1 == *p2))
		{
			p1++;
			p2++;
		}
		if (!*p2)
		{
			return ret;
		}
		ret++;
	}
	return NULL;
}

//ʵ��memcmp
void* my_memcpy(void* des,void* src,size_t num)
{
	void* ret = des;
	while (num--)
	{
		*(char*)des = *(char*)src;
		++(char*)des;
		++(char*)src;
	}
	return ret;
}
int main()
{
	/*char arr1[30] = "hello world";
	char arr2[] = "llo";*/
	//int len=my_strlen3(arr);
	//printf("%d", len);
	//char* ret=my_strstr(arr1, arr2);
	//if (ret == NULL)
	//{
	//	printf("���Ӵ�");
	//}
	//else
	//{
	//	printf("%s", ret);
	//}
	//printf("%d\n", ret);

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int arr2[10] = {0};
	my_memcpy(arr2, arr, sizeof(arr));

	return 0;
}