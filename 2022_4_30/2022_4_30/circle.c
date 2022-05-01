#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
void caculate(){
}
void show(){//实现字符从两端移动，向中间聚拢
	char arr1[20]="welcome to china !!";
	char arr2[20]="*******************";
	int left=0;
	int right=strlen(arr2);//计算字符长度，因为如果用sizeof来计算的话char中有一个'\0'占一个字节，要减去2
	while(left<=right){
	     arr2[left]=arr1[left];
		 arr2[right]=arr1[right];
		 printf("%s\n",arr2);
		 Sleep(1000);//停格一秒
		 system("cls");//清屏
		 left++;
		 right--;
	}
	printf("%s",arr2);
}
void dichotomy(){//二分法查找
      
	int arr[]={1,2,3,4,5,6,7,8,9,0};
	int n;
	int left=0;
	int right=(sizeof(arr)/sizeof(arr[0]))-1;
    int mid=(left+right)/2;
	scanf("%d",&n);
	while(left<=right){
		mid=(left+right)/2;
	    if(arr[mid]>n){
	        right=mid-1;
	    }else if(arr[mid]<n){
	        left=mid+1;
	    }else{
	        printf("找到了,下标为%d",mid);
			break;
	    }
	}
	if(left>right){
		   printf("找不到");
		}

}
void login(){
	char password[20]="";
	int i=0;
	for(i=0;i<3;i++){//只允许验证三次
		printf("请输入密码:>");
	    scanf("%s",password);
		if(strcmp(password,"123456") == 0){
		printf("登录成功\n");
		break;
		}
		else{
		printf("密码错误\n");
		}
	}
	if(3 == i){
	    printf("三次都输入错误,退出登录\n");
	}
}
int main(){
	login();
	return 0;
}
	




