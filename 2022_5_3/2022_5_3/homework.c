#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main(){
	//������������С�������
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
	//�žų˷��ھ���
	/*int i;
	for(i=1;i<=9;i++){
		int j;
		for(j=1;j<=i;j++){
		  printf("%d*%d=%-2d ",i,j,i*j);
		}
		printf("\n");
	}*/
	//1-100֮���������ı���
	/*int i=0;
	int count=0;
	for(i=1;i<=100;i++){
		if(i%3==0){
		 printf("%d ",i);
		 count++;
		}
		
	}
	printf("count=%d",count);*/

	//շת����������Լ��
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
	//��ӡ1000��2000֮�������1.�ܱ�4�������ܱ�100������2.�ܱ�400����
	/*int year=0;
	int count=0;
	for(year=1000;year<=2000;year++){
		if((year%4==0&&year%100!=0)||(year%400==0)){
		  printf("%d ",year);
		  count++;
		}
	
	}
	printf("count=%d",count);*/

	//��ӡ100-200֮����������Գ�������2->n-1ȥ�Գ�
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
	//��һ��1-100�������������ֶ��ٸ�����9��������if�Ǳ������жϣ�����99������������9
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
	//��ʮ�����������ֵ������̨��
	/*int arr[]={2,3,4,5,7,9,656,23,1,4};
	int max=arr[0];
	int i;
	for(i=1;i<10;i++){
		if(arr[max]<arr[i]){
		  max=i;
		}
	}
	printf("max=%d",arr[max]);*/
    //����žų˷��ھ���
    int i,j;
	for(i=1;i<=9;i++){
		for(j=1;j<=i;j++){
		  printf("%d*%d=%-2d ",i,j,i*j);
		}
		printf("\n");
	}

    return 0;
}