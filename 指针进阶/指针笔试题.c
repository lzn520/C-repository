#define _CRT_SECURE_NO_WARNINGS 1
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	p = 0x100000;
//	printf("%p\n", p + 0x1);//ָ��+1�������͵Ĵ�С��struct Test ����Ϊ�ṹ�壬+1Ϊ20���ֽ� 0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//(unsigned long)ǿ������ת��Ϊ���Σ����μ�һ���Ǽ�һ���ֽ� 0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//ǿ������ת��Ϊint*,p+1���Ǽ�4���ֽ� 0x100004
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//���������Ƕ��ű��ʽ�����ű��ʽ�������Ǹ�������
//	int *p;
//	p = a[0];
//	printf("%d", p[0]);//1
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}


int main()
{
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char**cp[] = { c + 3, c + 2, c + 1, c };
	char***cpp = cp;
	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *--*++cpp + 3);//ER
	printf("%s\n", *cpp[-2] + 3);//ST,cpp-2,�����cpp��ֵ��û���
	printf("%s\n", cpp[-1][-1] + 1);//EW
	return 0;
}