#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����һ������ֵ������˳���ӡ����ÿһλ
void print(int n){
	if(n>9){
	   print(n/10);
	}
	printf("%d ",n%10);

}
//�õݹ����ַ�������
int  _strlen(char* str){
	if(*str=='\0'){
	   return 0;
	}
	else 
		return 1+_strlen(str+1);
}
//1234
//123 4
//12 3 4

//�õݹ���n�Ľ׳�
int _sumcount(int n){
	if(1==n){
	    return 1;
	}
	else{
	    return n*_sumcount(n-1);
	}

}

//���÷ǵݹ�����쳲�������

int fib(int n){
	int a=1;
	int b=1;
	int i;
	int result;
	if(n<=2){
	   return 1;
	}
	else{
		for(i=3;i<=n;i++){
		    result=a+b;
			a=b;
			b=result;
		}
		return result;
	
	}


}
int main(){
	/*int get;
	int n=0;
	int sum;*/
	//print(1234);
	//�������ַ������Ⱥ���

	/*get=_strlen("abcdefg");
	printf("%d",get);*/

	//��n�Ľ׳�
	/*sum=_sumcount(4);
	printf("n!=%d",sum);*/

	//���÷ǵݹ���쳲�������
   int sum;
   int n;
   scanf("%d",&n);
   sum=fib(n);
   printf("%d",sum);
   return 0;
}