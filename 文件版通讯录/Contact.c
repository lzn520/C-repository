#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"
//查找联系人是否存在
int FindContact(const struct Contact*sp, char *name)
{
	int i = 0;
	for (i = 0; i < sp->size; i++)
	{
		if (strcmp(sp->data[i].name, name) == 0)
		{
			break;
		}
	}
	if (i == sp->size)
	{
		return -1;
	}
	else
		return i;
}
//初始化通讯录
void InitContact(struct Contact* sp)
{
	sp->data = (struct People*)malloc(3 * sizeof(struct People));
	if (sp->data == NULL)
	{
		return;
	}	
	sp->size = 0;
	sp->capacity = Default_sz;
	loadContact(sp);
}

//以二进制的形式加载数据进来
void loadContact(Contact* sp)
{
	People temp = { 0 };
	FILE* pfRead = fopen("contact.dat", "rb");
	if (pfRead == NULL)
	{
	    printf("loadContact::%s\n", strerror(errno));
		return;
	}
	while (fread(&temp, sizeof(People), 1, pfRead))
	{
		CheckCapacity(sp);
		sp->data[sp->size] = temp;
		sp->size++;
	}

}

//检测通讯录的容量是否足够，不够就扩容
void CheckCapacity(struct Contact* sp)
{
	if (sp->size == sp->capacity)
	{
		struct People* temp = realloc(sp->data, (sp->capacity+2)*sizeof(struct People));
		if (temp != NULL)
		{
			sp->data = temp;
			sp->capacity += 2;
			printf("扩容成功\n");
		}
		else
		{
			printf("扩容失败\n");
		}
	}
}
//添加联系人
void addContact(struct Contact* sp)
{
	//检测通讯录的容量是否足够，不够就扩容
	CheckCapacity(sp);
	printf("请输入姓名:>\n");
	scanf("%s", sp->data[sp->size].name);
	printf("请输入年龄:>\n");
	scanf("%d", &(sp->data[sp->size].age));
	printf("请输入性别:>\n");
	scanf("%s", sp->data[sp->size].sex);
	printf("请输入电话:>\n");
	scanf("%s", sp->data[sp->size].tele);
	printf("请输入住址:>\n");
	scanf("%s", sp->data[sp->size].addr);
	sp->size++;
	printf("添加成功\n");
	/*
	if (sp->size == Max)
	{
		printf("联系人已满，无法添加\n");
	}
	else
	{
		printf("请输入姓名:>\n");
		scanf("%s", sp->data[sp->size].name);
		printf("请输入年龄:>\n");
		scanf("%d", &(sp->data[sp->size].age));
		printf("请输入性别:>\n");
		scanf("%s", sp->data[sp->size].sex);
		printf("请输入电话:>\n");
		scanf("%s", sp->data[sp->size].tele);
		printf("请输入住址:>\n");
		scanf("%s", sp->data[sp->size].addr);
		sp->size++;
		printf("添加成功\n");
	}*/
}

//显示联系人
void showContact(const struct Contact* sp)
{
	int i = 0;
	if (sp->size == 0)
	{
		printf("无联系人信息\n");
	}
	else
	{
		printf("%-10s\t%-5s\t%-5s\t%-15s\t%-20s\t\n",
			"姓名", "年龄", "性别", "电话", "住址");
		for (i = 0; i < sp->size; i++)
		{
			
			printf("%-10s\t%-5d\t%-5s\t%-15s\t%-20s\t\n",
				sp->data[i].name,
				sp->data[i].age,
				sp->data[i].sex,
				sp->data[i].tele,
				sp->data[i].addr);
		}
	}
}


//删除联系人
void delContact(struct Contact* sp)
{
	char name[Max_Name];
	if (sp->size == 0)
	{
		printf("还未添加联系人，无法进行删除\n");
	}
	else
	{
		printf("请输入要删除的联系人姓名\n");
		scanf("%s", name);
		
		//查找联系人是否存在，存在返回size
		int ret = FindContact(sp, name);
		if (ret == -1)
		{
			printf("联系人不存在\n");
		}
		else
		{
			//进行删除,直接将后一个数组的内容往前移
			int i = 0;
			for (i = ret; i < sp->size-1; i++)
			{
				sp->data[i] = sp->data[i + 1];
			}
			sp->size--;
			printf("删除成功\n");
		}
	}
}

//查找联系人
void srcContact(const struct Contact* sp)
{
	char name[Max_Name];
	if (sp->size == 0)
	{
		printf("通讯录无联系人\n");
	}
	else
	{
		printf("请输入要查找的联系人姓名\n");
		scanf("%s", name);
		//查找联系人是否存在，存在返回size
		int ret = FindContact(sp, name);
		if (ret == -1)
		{
			printf("联系人不存在\n");
		}
		else
		{
			printf("%-10s\t%-5s\t%-5s\t%-15s\t%-20s\t\n",
				"姓名", "年龄", "性别", "电话", "住址");
			printf("%-10s\t%-5d\t%-5s\t%-15s\t%-20s\t\n",
				sp->data[ret].name,
				sp->data[ret].age,
				sp->data[ret].sex,
				sp->data[ret].tele,
				sp->data[ret].addr);
		}
	}
}

//暂停以及清除屏幕
void pause()
{
	Sleep(1000);
	system("cls");
}

//修改指定人的信息
void corContact(struct Contact* sp)
{
	char name[Max_Name];
	if (sp->size == 0)
	{
		printf("通讯录没有联系人\n");
	}
	else
	{
		printf("请输入要修改的联系人姓名:>\n");
		scanf("%s", name);
		int ret = FindContact(sp, name);
		if (ret == -1 )
		{
			printf("查无此人\n");
		}
		else
		{
			printf("请输入姓名:>\n");
			scanf("%s", sp->data[ret].name);
			printf("请输入年龄:>\n");
			scanf("%d", &(sp->data[ret].age));
			printf("请输入性别:>\n");
			scanf("%s", sp->data[ret].sex);
			printf("请输入电话:>\n");
			scanf("%s", sp->data[ret].tele);
			printf("请输入住址:>\n");
			scanf("%s", sp->data[ret].addr);
		}
	}
}

//内存回收
void Contactdestory(struct Contact* sp)
{
	free(sp->data);
	sp->data = NULL;
}

//排序方式
int compare(const void *p1,const void *p2)
{
	return ((struct People*)p1)->age - ((struct People*)p2)->age;
}

//按照年龄进行排序
void sortContact(struct Contact* sp)
{
	qsort(sp->data, sp->size, sizeof(struct People),compare);
    //排序好以后再进行打印
	showContact(sp);
}

//将数据以二进制的形式保存到文件
void SaveContact(Contact* sp)
{
	FILE* pf = fopen("contact.dat", "wb");
	if (pf == NULL)
	{
		printf("SaveContact::%s\n", strerror(errno));
		return;
	}
	int i = 0;
	for (i = 0; i < sp->size; i++)
	{
		fwrite(&(sp->data[i]), sizeof(People), 1, pf);
	}
    
	fclose(pf);
	pf = NULL;
}