#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char input[10]="0";
	system("shutdown -s -t -120");
	while(1){
	    printf("����ϵͳ������һ����֮��ػ�������������ȡ���ػ�:>\n");
	    scanf("%s",input);
	    if(strcmp(input,"������") == 0)
		{
	         system("shutdown -a");
	         break;
	    }
	}
   return 0;
}