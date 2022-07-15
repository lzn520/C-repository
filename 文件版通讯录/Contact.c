#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"
//������ϵ���Ƿ����
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
//��ʼ��ͨѶ¼
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

//�Զ����Ƶ���ʽ�������ݽ���
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

//���ͨѶ¼�������Ƿ��㹻������������
void CheckCapacity(struct Contact* sp)
{
	if (sp->size == sp->capacity)
	{
		struct People* temp = realloc(sp->data, (sp->capacity+2)*sizeof(struct People));
		if (temp != NULL)
		{
			sp->data = temp;
			sp->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}
//�����ϵ��
void addContact(struct Contact* sp)
{
	//���ͨѶ¼�������Ƿ��㹻������������
	CheckCapacity(sp);
	printf("����������:>\n");
	scanf("%s", sp->data[sp->size].name);
	printf("����������:>\n");
	scanf("%d", &(sp->data[sp->size].age));
	printf("�������Ա�:>\n");
	scanf("%s", sp->data[sp->size].sex);
	printf("������绰:>\n");
	scanf("%s", sp->data[sp->size].tele);
	printf("������סַ:>\n");
	scanf("%s", sp->data[sp->size].addr);
	sp->size++;
	printf("��ӳɹ�\n");
	/*
	if (sp->size == Max)
	{
		printf("��ϵ���������޷����\n");
	}
	else
	{
		printf("����������:>\n");
		scanf("%s", sp->data[sp->size].name);
		printf("����������:>\n");
		scanf("%d", &(sp->data[sp->size].age));
		printf("�������Ա�:>\n");
		scanf("%s", sp->data[sp->size].sex);
		printf("������绰:>\n");
		scanf("%s", sp->data[sp->size].tele);
		printf("������סַ:>\n");
		scanf("%s", sp->data[sp->size].addr);
		sp->size++;
		printf("��ӳɹ�\n");
	}*/
}

//��ʾ��ϵ��
void showContact(const struct Contact* sp)
{
	int i = 0;
	if (sp->size == 0)
	{
		printf("����ϵ����Ϣ\n");
	}
	else
	{
		printf("%-10s\t%-5s\t%-5s\t%-15s\t%-20s\t\n",
			"����", "����", "�Ա�", "�绰", "סַ");
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


//ɾ����ϵ��
void delContact(struct Contact* sp)
{
	char name[Max_Name];
	if (sp->size == 0)
	{
		printf("��δ�����ϵ�ˣ��޷�����ɾ��\n");
	}
	else
	{
		printf("������Ҫɾ������ϵ������\n");
		scanf("%s", name);
		
		//������ϵ���Ƿ���ڣ����ڷ���size
		int ret = FindContact(sp, name);
		if (ret == -1)
		{
			printf("��ϵ�˲�����\n");
		}
		else
		{
			//����ɾ��,ֱ�ӽ���һ�������������ǰ��
			int i = 0;
			for (i = ret; i < sp->size-1; i++)
			{
				sp->data[i] = sp->data[i + 1];
			}
			sp->size--;
			printf("ɾ���ɹ�\n");
		}
	}
}

//������ϵ��
void srcContact(const struct Contact* sp)
{
	char name[Max_Name];
	if (sp->size == 0)
	{
		printf("ͨѶ¼����ϵ��\n");
	}
	else
	{
		printf("������Ҫ���ҵ���ϵ������\n");
		scanf("%s", name);
		//������ϵ���Ƿ���ڣ����ڷ���size
		int ret = FindContact(sp, name);
		if (ret == -1)
		{
			printf("��ϵ�˲�����\n");
		}
		else
		{
			printf("%-10s\t%-5s\t%-5s\t%-15s\t%-20s\t\n",
				"����", "����", "�Ա�", "�绰", "סַ");
			printf("%-10s\t%-5d\t%-5s\t%-15s\t%-20s\t\n",
				sp->data[ret].name,
				sp->data[ret].age,
				sp->data[ret].sex,
				sp->data[ret].tele,
				sp->data[ret].addr);
		}
	}
}

//��ͣ�Լ������Ļ
void pause()
{
	Sleep(1000);
	system("cls");
}

//�޸�ָ���˵���Ϣ
void corContact(struct Contact* sp)
{
	char name[Max_Name];
	if (sp->size == 0)
	{
		printf("ͨѶ¼û����ϵ��\n");
	}
	else
	{
		printf("������Ҫ�޸ĵ���ϵ������:>\n");
		scanf("%s", name);
		int ret = FindContact(sp, name);
		if (ret == -1 )
		{
			printf("���޴���\n");
		}
		else
		{
			printf("����������:>\n");
			scanf("%s", sp->data[ret].name);
			printf("����������:>\n");
			scanf("%d", &(sp->data[ret].age));
			printf("�������Ա�:>\n");
			scanf("%s", sp->data[ret].sex);
			printf("������绰:>\n");
			scanf("%s", sp->data[ret].tele);
			printf("������סַ:>\n");
			scanf("%s", sp->data[ret].addr);
		}
	}
}

//�ڴ����
void Contactdestory(struct Contact* sp)
{
	free(sp->data);
	sp->data = NULL;
}

//����ʽ
int compare(const void *p1,const void *p2)
{
	return ((struct People*)p1)->age - ((struct People*)p2)->age;
}

//���������������
void sortContact(struct Contact* sp)
{
	qsort(sp->data, sp->size, sizeof(struct People),compare);
    //������Ժ��ٽ��д�ӡ
	showContact(sp);
}

//�������Զ����Ƶ���ʽ���浽�ļ�
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