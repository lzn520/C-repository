#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define Max_Name 20
#define Max_Sex 5
#define Max_tele 12
#define Max_addr 30
#define Default_sz 3
enum Function
{
	Exit,
	add,
	del,
	src,
	show,
	cor,
	sort
};

typedef struct People
{
	char name[Max_Name];
	int age;
	char sex[Max_Sex];
	char tele[Max_tele];
	char addr[Max_addr];
}People;

typedef struct Contact
{
	int size;
	int capacity;
	struct People * data;
}Contact;

void InitContact(struct Contact* sp);
void addContact(struct Contact* sp);
void showContact(const struct Contact* sp);
void delContact(struct Contact* sp);
void srcContact(const struct Contact* sp);
void corContact(struct Contact* sp);
void Contactdestory(struct Contact* sp);
void sortContact(struct Contact* sp);
void pause();
//修改指定人
//排序  
void SaveContact(Contact* sp);

void loadContact(Contact* sp);
void CheckCapacity(struct Contact* sp);