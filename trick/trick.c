#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char input[10]="0";
	system("shutdown -s -t -120");
	while(1){
	    printf("您的系统将会在一分钟之后关机，输入我是猪取消关机:>\n");
	    scanf("%s",input);
	    if(strcmp(input,"我是猪") == 0)
		{
	         system("shutdown -a");
	         break;
	    }
	}
   return 0;
}