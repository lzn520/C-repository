#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"
void menu()
{
	printf("*******************************\n");
	printf("*****1.add        2.del    ****\n");
	printf("*****3.src        4.show   ****\n");
	printf("*****5.cor        6.sort   ****\n");
	printf("*********   0.exit    ********\n");
}
void test()
{
	int input = 0;
	struct Contact con;
	//初始化通讯录,在初始化的同时要把文件中已有的信息加载进来
	InitContact(&con);
	do
	{
		menu();
		printf("请输入你的选项:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			addContact(&con);//添加联系人
			//pause();
			break;
		case del:
			delContact(&con);//删除联系人
			//pause();
			break;
		case src:
			srcContact(&con);//查找
			break;
		case show:
			showContact(&con);//显示
			break;
		case cor:
			corContact(&con);//修改指定人信息
			break;
		case sort:
			sortContact(&con);//按照年龄进行排序
			break;
		case Exit:
			//将数据以二进制的形式保存到文件
			SaveContact(&con);
			//退出通讯录之前要进行内存回收
			Contactdestory(&con);
			printf("退出通讯录\n");
			break;
 		default:
			printf("输入错误请重新输入\n");
			break;
		}

	} while (input);
}
int main()
{
	test();
	return 0;
}