#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//接受一个整形值，按照顺序打印他的每一位
void print(int n){
	if(n>9){
	   print(n/10);
	}
	printf("%d ",n%10);

}
//用递归求字符串长度
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

//用递归求n的阶乘
int _sumcount(int n){
	if(1==n){
	    return 1;
	}
	else{
	    return n*_sumcount(n-1);
	}

}

//采用非递归来求斐波那契数

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
	//调用求字符串长度函数

	/*get=_strlen("abcdefg");
	printf("%d",get);*/

	//求n的阶乘
	/*sum=_sumcount(4);
	printf("n!=%d",sum);*/

	//采用非递归求斐波那契数
   int sum;
   int n;
   scanf("%d",&n);
   sum=fib(n);
   printf("%d",sum);
   return 0;
}