#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
void caculate(){
}
void show(){//ʵ���ַ��������ƶ������м��£
	char arr1[20]="welcome to china !!";
	char arr2[20]="*******************";
	int left=0;
	int right=strlen(arr2);//�����ַ����ȣ���Ϊ�����sizeof������Ļ�char����һ��'\0'ռһ���ֽڣ�Ҫ��ȥ2
	while(left<=right){
	     arr2[left]=arr1[left];
		 arr2[right]=arr1[right];
		 printf("%s\n",arr2);
		 Sleep(1000);//ͣ��һ��
		 system("cls");//����
		 left++;
		 right--;
	}
	printf("%s",arr2);
}
void dichotomy(){//���ַ�����
      
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
	        printf("�ҵ���,�±�Ϊ%d",mid);
			break;
	    }
	}
	if(left>right){
		   printf("�Ҳ���");
		}

}
void login(){
	char password[20]="";
	int i=0;
	for(i=0;i<3;i++){//ֻ������֤����
		printf("����������:>");
	    scanf("%s",password);
		if(strcmp(password,"123456") == 0){
		printf("��¼�ɹ�\n");
		break;
		}
		else{
		printf("�������\n");
		}
	}
	if(3 == i){
	    printf("���ζ��������,�˳���¼\n");
	}
}
int main(){
	login();
	return 0;
}
	




