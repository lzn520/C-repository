#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu(){
	printf("********************************\n");
	printf("********  ������С��Ϸ  ********\n");
	printf("*******1.play      0.over*******\n");
	printf("********************************\n");

}
void game(){
  int get;
  int put;
  get=rand()%100+1;
  while(1){
	  printf("������µ�����:>\n");
      scanf("%d",&put);
	  if(put>get){
	  printf("�´���\n");
	  }
	  else if(put<get){
	  printf("��С��\n");
	  }
	  else{
	  printf("�¶���\n");
	  break;
	  }
  }
 /* printf("%d\n",get);*/
}
int main(){
	int input;
	srand((unsigned) time(NULL));//����ʱ���������ݣ�unsigned�ǰѻ�õ�����ת��������
	do{
	menu();
	scanf("%d",&input);
	switch(input){
	case 1:game();break;
	case 2:break;
	}
	}while(input!=0);//�������ͳ���ѭ��
   return 0;
}