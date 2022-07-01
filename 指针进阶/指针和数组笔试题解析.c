#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//一维数组
	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a));//16  sizeof(a)表示计算数组的大小
	//printf("%d\n", sizeof(a + 0));//4/8  a在这里表示首元素的地址，a+0表示首元素的地址，地址大小为4/8个字节
	//printf("%d\n", sizeof(*a));//4 *a表示对首元素解引用，首元素的大小为4个字节
	//printf("%d\n", sizeof(a + 1));//4/8  首元素地址+1表示a[1]的地址，地址大小为4/8
	//printf("%d\n", sizeof(a[1]));//4  第二个元素的大小，a[1]的大小为4个字节
	//printf("%d\n", sizeof(&a));//4/8  &a取出来的是整个数组的地址，数组的地址大小为4/8个字节
	//printf("%d\n", sizeof(*&a));//16 &和*刚好抵消，取出来整个数组的地址，然后对它解引用得到的是整个数组
	//printf("%d\n", sizeof(&a + 1));//4/8  &a+1是跳过整个数组的地址，地址大小4/8
	//printf("%d\n", sizeof(&a[0]));//4/8  
	//printf("%d\n", sizeof(&a[0] + 1));//4/8  a[1]的地址

	//字符数组
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(arr));//6  求的是整个数组的大小，单位为字节
	//printf("%d\n", sizeof(arr + 0));//4/8  arr+0表示首元素的地址，地址大小为4/8
	//printf("%d\n", sizeof(*arr));//1 *arr表示对首元素地址解引用，里面放的元素大小为1个字节
	//printf("%d\n", sizeof(arr[1]));//1 第二个元素的大小
	//printf("%d\n", sizeof(&arr));//4/8 &arr取出来的是整个数组的地址，地址大小为4/8
	//printf("%d\n", sizeof(&arr + 1));//4/8 跳过整个数组的地址的大小
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 第二个元素地址的大小

	//strlen是求字符串长度，参数要求传入一个地址，从该地址开始向后找，直到遇见/0结束
	//printf("%d\n", strlen(arr));//strlen(arr)表示从首元素地址开始向后找，但是该数组内并没有\0，所以会获得一个随机值
	//printf("%d\n", strlen(arr + 0));//随机值  从首元素开始向后找
	////printf("%d\n", strlen(*arr));//err *arr得知为'a',其ASCII码值为97，相当于把97当作一个地址开始向后找，但是会报错,属于非法访问
	////printf("%d\n", strlen(arr[1]));//err 同上理
	//printf("%d\n", strlen(&arr));//随机值 &arr取出整个数组的地址，数组的地址还是指向数组的开头
	//printf("%d\n", strlen(&arr + 1));//随机值 跳过一整个数组，然后向后找，还是得到一个随机值,但是比上面的那个随机值小6
	//printf("%d\n", strlen(&arr[0] + 1));//随机值 从arr[1]的地址开始向后找，比倒数第三个随机值小1


	//char arr[] = "abcdef";//"a b c d e f \0"
	//printf("%d\n", sizeof(arr));//7 计算整个数组的大小7*1=7，有一个\0也占用字节
	//printf("%d\n", sizeof(arr + 0));//4/8  首元素的地址加0还是首元素的地址
	//printf("%d\n", sizeof(*arr));//1 首元素的大小为1个字节
	//printf("%d\n", sizeof(arr[1]));//1 计算的是arr[1]内元素的大小
	//printf("%d\n", sizeof(&arr));//4/8 计算的是整个数组的地址的大小
	//printf("%d\n", sizeof(&arr + 1));//4/8 跳过整个数组的地址的大小
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 arr[1]地址的大小

	//printf("%d\n", strlen(arr));//6 strlen不计算\0，从首元素地址开始向后找
	//printf("%d\n", strlen(arr + 0));//6 arr+0还是首元素的地址
	////printf("%d\n", strlen(*arr));//err非法访问
	////printf("%d\n", strlen(arr[1]));//err 非法访问
	//printf("%d\n", strlen(&arr));//6 &arr取出整个数组的地址，整个数组的地址是在数组开头，从开头开始向后访问
	//printf("%d\n", strlen(&arr + 1));//随机值，跳过整个数组开始向后访问，会是随机值
	//printf("%d\n", strlen(&arr[0] + 1));//5 从arr[1]的地址开始向后找\0


	//char *p = "abcdef";//这种写法是把常量字符串中a的地址放到了p
	//printf("%d\n", sizeof(p));//4/8  指针p的大小为4/8
	//printf("%d\n", sizeof(p + 1));//4/8 指针指向b，指针的大小
	//printf("%d\n", sizeof(*p));//1 *p为a
	//printf("%d\n", sizeof(p[0]));//1 p[0]=*(p+0)='a'
	//printf("%d\n", sizeof(&p));//4/8 指针的地址的大小
	//printf("%d\n", sizeof(&p + 1));//4/8 指针指向b的地址的大小
	//printf("%d\n", sizeof(&p[0] + 1));//4/8  指针指向b的地址的大小

	//printf("%d\n", strlen(p));//6 p是a的地址，从该地址开始向后找
	//printf("%d\n", strlen(p + 1));//5 p+1是b的地址
	////printf("%d\n", strlen(*p));//err *p='a',非法访问，会报错
	////printf("%d\n", strlen(p[0]));//err 非法访问，报错
	//printf("%d\n", strlen(&p));//随机数，从p指针的地址开始向后找\0，会是一个随机数
	//printf("%d\n", strlen(&p + 1));//随机数
	//printf("%d\n", strlen(&p[0] + 1));//5 &p[0]+1是取出来a的地址再+1，为第二个元素的地址，然后开始向后访问


	//二维数组
	//二维数组有几个知识点要注意，二维数组的首元素是把二维数组看作一维数组，所以首元素是第一行，表示为a[0]
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//48 计算整个数组的大小，3*4*4
	//printf("%d\n", sizeof(a[0][0]));//4 计算a[0][0]元素的大小
	//printf("%d\n", sizeof(a[0]));//16 a[0]表示第一行的数组名，数组名直接放在sizeof中，表示计算该数组的大小，4*4=16
	//printf("%d\n", sizeof(a[0] + 1));//4/8  a[0]+1表示数组首元素的地址+1，为a[0][1]的地址，地址大小为4/8
	//printf("%d\n", sizeof(*(a[0] + 1)));//4 a[0][1]元素的大小
	//printf("%d\n", sizeof(a + 1));//4/8  a表示首元素的地址，首元素为a[0]，首元素+1，为a[1]的地址，地址大小为4/8
	//printf("%d\n", sizeof(*(a + 1)));//16  对a[1]解引用，求的是数组的大小
	//printf("%d\n", sizeof(&a[0] + 1));//4/8 计算的是a[1]的地址的大小
	//printf("%d\n", sizeof(*(&a[0] + 1)));//16  对a[1]的地址解引用，求的是数组的大小
	//printf("%d\n", sizeof(*a));//16  a表示首元素的地址，首元素为a[0]
	//printf("%d\n", sizeof(a[3]));/*16 数组名直接在sizeof内部，表示求数组大小，sizeof内部不会直接去 访问数组的，a[3]不存在但是他会看作a[0]来处理*/
	                        

	return 0;
}
