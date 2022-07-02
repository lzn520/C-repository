#define _CRT_SECURE_NO_WARNINGS 1
void reverse(int arr[], int sz)
{
	int temp;
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}

}

void print_(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",*(p+i));
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	reverse(arr, sz);
	print_(arr, sz);
	return 0;
}