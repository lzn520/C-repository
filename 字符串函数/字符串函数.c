#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//实现求字符串长度函数
//1.采用计数器方法
int my_strlen(const char * p)//不能被改变，加上const
{
	assert(p);//进来先断言，判断指针的有效性
	int count = 0;
	while (*p != '\0')
	{
		count++;
		p++;
	}
	return count;
}

//2.采用递归的方法，即不能创建临时变量的方法
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

//3.采用指针减去指针
int my_strlen3(char*p)
{
	char* p2 = p;
	/*while (*p)
	{
		p++;
	}
	return p - p2;*/
	//或者
	while (*p++);//先解引用再++，直到指向\0,跳出循环
	return p - 1 - p2;
}

//实现字符串复制函数
char* my_strcpy(char* des,const char* src)//从des开始cpy过去，直到复制完src的\0才结束
{
	assert(des);
	assert(src);
	char* ret = des;
	while (*des++ = *src++);
	return ret;
}

//实现字符串连接函数
char* my_strcat(char* des,const char* src)//字符串连接，首先要找到des的\0从此开始连接
{
	assert(des);
	assert(src);
	char* ret = des;
	/*while (*des)
	des++;*///让des指向\0

	//或者写成
	/*while (*des++);
	des--;*///因为des在解引用为\0的时候不会再循环，但是还是会接着自增++，结果会指向\0后面的空间，所以要--，指向\0
	while (*des++ = *src++);
	return ret;

}

//实现字符串比较函数
int my_strcmp(const char*des,const char* src)
{
	assert(des);
	assert(src);
	while (*des == *src)
	{
		des++;
		src++;
	}
	return *des - *src;//如果*des>*src返回一个>0的数字

}

//实现n个字符串连接
char* my_strncat(char* des, const char* src,int n)//字符串连接，首先要找到des的\0从此开始连接
{
	assert(des);
	assert(src);
	char* ret = des;
	while (*des)
	des++;

	while (*des++ = *src++);
	return ret;

}


//实现子字符串查找，找不到返回空指针，找到了返回查找的字符串起始匹配的地址

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

//实现memcmp
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
	//	printf("非子串");
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