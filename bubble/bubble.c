#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//冒泡排序
void bubble_sort(int* arr, int n) {
	int i = 0;
	int j;
	int count = 0;
	int flag;
	for (i = 0; i < n - 1; i++) {
		flag = 1;//每一次排序前都假设这次的数已经排好序了
		for (j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;//如果flag=0执行了说明这个数没有排好序
			}
			count++;//用来计算执行了多少次交换
		}
		if (1 == flag) {
			break;
		}
	}
	//printf("count=%d\n", count);
}
int main() {
	int arr[10];
	int x;
	int sz;
	int i;
	printf("请输入你要排序的数字:>");
	for (x = 0; x<10; x++) {
		scanf("%d", &arr[x]);
	}
    sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
}