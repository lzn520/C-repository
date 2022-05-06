#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main(){
	//输入三个数由小到大输出
	/*int i;
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b){
	  int t=a;
	  a=b;
	  b=t;
	}
	if(a<c){
	  int t=a;
	  a=c;
	  c=t;
	}
	if(b<c){
	  int t=c;
	      c=b;
	      b=t;
	}
	printf("%d %d %d\n",a,b,c);*/
	//九九乘法口诀表
	/*int i;
	for(i=1;i<=9;i++){
		int j;
		for(j=1;j<=i;j++){
		  printf("%d*%d=%-2d ",i,j,i*j);
		}
		printf("\n");
	}*/
	//1-100之间所有三的倍数
	/*int i=0;
	int count=0;
	for(i=1;i<=100;i++){
		if(i%3==0){
		 printf("%d ",i);
		 count++;
		}
		
	}
	printf("count=%d",count);*/

	//辗转相除法求最大公约数
	/*int a,b;
	int t;
	int i;
	scanf("%d %d",&a,&b);
	do{
	   t=a%b;
	   a=b;
	   b=t;


	}while(t!=0);
	printf("%d",a);*/
	//打印1000到2000之间的闰年1.能被4整除不能被100整除，2.能被400整除
	/*int year=0;
	int count=0;
	for(year=1000;year<=2000;year++){
		if((year%4==0&&year%100!=0)||(year%400==0)){
		  printf("%d ",year);
		  count++;
		}
	
	}
	printf("count=%d",count);*/

	//打印100-200之间的素数，试除法，用2->n-1去试除
	/*int i,n;
	int count=0;
	for(i=100;i<=200;i++){
		for(n=2;n<=i-1;n++){
			if(i%n==0){
			  break;
			}
		}
		if(n==i){
		   printf("%d ",i);
		   count++;
		}
	
	}printf("count=%d",count);*/
	//数一下1-100的所有整数出现多少个数字9，用两个if是避免少判断，比如99，里面有两个9
	//int i;
	//int count=0;
	//for(i=1;i<=100;i++){
	//	if(i%10==9){
	//	   count++;
	//	}
	//	if(i/10==9){
	//	   count++;
	//	}
	//}
	//printf("count=%d",count);
	//求十个整数中最大值。打擂台法
	/*int arr[]={2,3,4,5,7,9,656,23,1,4};
	int max=arr[0];
	int i;
	for(i=1;i<10;i++){
		if(arr[max]<arr[i]){
		  max=i;
		}
	}
	printf("max=%d",arr[max]);*/
    //输出九九乘法口诀表
    int i,j;
	for(i=1;i<=9;i++){
		for(j=1;j<=i;j++){
		  printf("%d*%d=%-2d ",i,j,i*j);
		}
		printf("\n");
	}

    return 0;
}