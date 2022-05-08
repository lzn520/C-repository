#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int judge(int num){
//	int n=2;
//	for(n=2;n<num;n++){
//		if(num%n==0){
//		   return 0;//return 0一执行，这个函数就结束了，比break更加有用
//		}
//	}
//	if(n=num){ //这个判断可有可无，因为当return 0执行了以后就不会继续执行后面的了
//	   return 1;
//	}
//}
#include <string.h>
void memery_set(){//调用一下库函数memset
  char arr1[]="hehe";
  char arr2[20]="hello world";
  memset(arr2,'-',3);//memery set 内存设置
  printf("%s",arr2);
}
void Swap(int* p1,int* p2){//交换两个整形变量的内容
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}
int judge(int n){//判断一个数是不是素数
	int j;
	for(j=2;j<n;j++){
		if(n%j == 0){
		  return 0;
		}
	}
	return 1;
}
int is_leap_year(int n){
	if((n%4==0 && n%100 !=0)||(n%400 == 0)){
	    return 1;
	}
}

//函数实现2分法查找
/*int Binary_search(int arr[],int n,int sz){
	int left=0;
	int right=sz;
	int mid;
	while(left<=right){
	   mid=(left+right)/2;
	   if(arr[mid]>n){
	        right=mid-1;
	   }
	   else if(arr[mid]<n){
	        left=mid+1;
	   }
	   else{
	        return mid;
	   }
	}
	return 0;
}*/

//每调用一次num++
 void _num(int* p){
     (*p)++;
 }
int main(){
  //调用memery_set函数
  //memery_set();

  //交换两个整形变量的内容
 /* int a=10;
  int b=20;
  printf("a=%d b=%d\n",a,b);
  Swap(&a,&b);
  printf("a=%d b=%d\n",a,b);*/
  
   //找出100-200之间的素数
	/*int i=0;
	for(i=100;i<=200;i++){
		if(1 == judge(i)){
		  printf("%d ",i);
		}
	}*/

	//打印1000-2000之间的闰年
	/*int i;
	int count=0;
	for(i=1000;i<=2000;i++){
		if(1 == is_leap_year(i)){
		  printf("%d ",i);
		  count++;
		}
	}
	printf("count=%d",count);*/

	//实现整形数组的2分法查找
	/*int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n;
	int ret=0;
	int sz=sizeof(arr)/sizeof(arr[0])-1;
	printf("请输入你要查找的数字:>");
	scanf("%d",&n);
	ret=Binary_search(arr,n,sz);
	if(ret!=0){
	   printf("找到了下标为%d",ret);
	}
	else{
	   printf("找不到\n");
	}*/
	
	//每调用一次num++
	int num=0;
	_num(&num);
	printf("%d\n",num);
	_num(&num);
	printf("%d\n",num);
	_num(&num);
	printf("%d\n",num);
    return 0;
}