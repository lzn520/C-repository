#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu(){
	printf("********************************\n");
	printf("********  猜数字小游戏  ********\n");
	printf("*******1.play      0.over*******\n");
	printf("********************************\n");

}
void game(){
  int get;
  int put;
  get=rand()%100+1;
  while(1){
	  printf("请输入猜的数字:>\n");
      scanf("%d",&put);
	  if(put>get){
	  printf("猜大了\n");
	  }
	  else if(put<get){
	  printf("猜小了\n");
	  }
	  else{
	  printf("猜对了\n");
	  break;
	  }
  }
 /* printf("%d\n",get);*/
}
int main(){
	int input;
	srand((unsigned) time(NULL));//利用时间戳获得数据，unsigned是把获得的数据转换成整型
	do{
	menu();
	scanf("%d",&input);
	switch(input){
	case 1:game();break;
	case 2:break;
	}
	}while(input!=0);//不结束就持续循环
   return 0;
}