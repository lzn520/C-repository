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
	//��ʼ��ͨѶ¼,�ڳ�ʼ����ͬʱҪ���ļ������е���Ϣ���ؽ���
	InitContact(&con);
	do
	{
		menu();
		printf("���������ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			addContact(&con);//�����ϵ��
			//pause();
			break;
		case del:
			delContact(&con);//ɾ����ϵ��
			//pause();
			break;
		case src:
			srcContact(&con);//����
			break;
		case show:
			showContact(&con);//��ʾ
			break;
		case cor:
			corContact(&con);//�޸�ָ������Ϣ
			break;
		case sort:
			sortContact(&con);//���������������
			break;
		case Exit:
			//�������Զ����Ƶ���ʽ���浽�ļ�
			SaveContact(&con);
			//�˳�ͨѶ¼֮ǰҪ�����ڴ����
			Contactdestory(&con);
			printf("�˳�ͨѶ¼\n");
			break;
 		default:
			printf("�����������������\n");
			break;
		}

	} while (input);
}
int main()
{
	test();
	return 0;
}