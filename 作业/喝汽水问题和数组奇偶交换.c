#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int sum = money;//����Ǯ�Ϳ����Ⱥȶ���ƿ
//	int bottle = money;//�ȵ����پ��ж��ٸ�ƿ��
//	while (bottle >= 2)
//	{
//		sum += bottle / 2;
//		bottle = bottle % 2 + bottle / 2;//���������Ϻȵ���ƿ��+ʣ�µ�ƿ��
//	}
//	printf("�ܹ����Ժȣ�%d", sum);
//	return 0;
//}



//���������˳��ʹ������λ��ǰ�棬ż��λ�ں���

void change(int*left, int sz)
{
	//int* left = arr;
	int* right = left + sz - 1;
	while (left<right)
	{
		//���ȴ�ǰ�濪ʼ��һ��ż��
		while ((left<right) && (*left % 2 != 0))//��ֹȫ��������ʱ��ָ��Խ�����
		{
			left++;
		}
		//Ȼ��ʼ�Ӻ�����һ������
		while ((left<right)&&(*right % 2 == 0))//��ֹȫ��ż����ʱ��ָ��Խ�����
		{
			right--;
		}
		//�������ǵ�λ��
		if (left<right)//����Ҫleft<right�ſ��Խ���
		{
			int temp = *left;
			*left = *right;
			*right = temp;
		}
	}
	
}
void print(int*p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	change(arr, sz);
	print(arr, sz);
	return 0;
}