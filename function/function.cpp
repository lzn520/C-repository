#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int judge(int num){
//	int n=2;
//	for(n=2;n<num;n++){
//		if(num%n==0){
//		   return 0;//return 0һִ�У���������ͽ����ˣ���break��������
//		}
//	}
//	if(n=num){ //����жϿ��п��ޣ���Ϊ��return 0ִ�����Ժ�Ͳ������ִ�к������
//	   return 1;
//	}
//}
#include <string.h>
void memery_set(){//����һ�¿⺯��memset
  char arr1[]="hehe";
  char arr2[20]="hello world";
  memset(arr2,'-',3);//memery set �ڴ�����
  printf("%s",arr2);
}
void Swap(int* p1,int* p2){//�����������α���������
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}
int judge(int n){//�ж�һ�����ǲ�������
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

//����ʵ��2�ַ�����
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

//ÿ����һ��num++
 void _num(int* p){
     (*p)++;
 }
int main(){
  //����memery_set����
  //memery_set();

  //�����������α���������
 /* int a=10;
  int b=20;
  printf("a=%d b=%d\n",a,b);
  Swap(&a,&b);
  printf("a=%d b=%d\n",a,b);*/
  
   //�ҳ�100-200֮�������
	/*int i=0;
	for(i=100;i<=200;i++){
		if(1 == judge(i)){
		  printf("%d ",i);
		}
	}*/

	//��ӡ1000-2000֮�������
	/*int i;
	int count=0;
	for(i=1000;i<=2000;i++){
		if(1 == is_leap_year(i)){
		  printf("%d ",i);
		  count++;
		}
	}
	printf("count=%d",count);*/

	//ʵ�����������2�ַ�����
	/*int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n;
	int ret=0;
	int sz=sizeof(arr)/sizeof(arr[0])-1;
	printf("��������Ҫ���ҵ�����:>");
	scanf("%d",&n);
	ret=Binary_search(arr,n,sz);
	if(ret!=0){
	   printf("�ҵ����±�Ϊ%d",ret);
	}
	else{
	   printf("�Ҳ���\n");
	}*/
	
	//ÿ����һ��num++
	int num=0;
	_num(&num);
	printf("%d\n",num);
	_num(&num);
	printf("%d\n",num);
	_num(&num);
	printf("%d\n",num);
    return 0;
}