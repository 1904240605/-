/*
����
���ö�̬�����¼�ӱ�׼���������ѧ����Ϣ��ѧ�š��������Ա����䡢�÷֡���ַ��

����,ѧ�ų��Ȳ�����20, �������Ȳ�����40, �Ա𳤶�Ϊ1, ��ַ���Ȳ�����40

����
���������У�ÿһ�ж���һ��ѧ������Ϣ���磺
00630018 zhouyan m 20 10.0 28#460
����������"end"����
���
����������ݵ������
ÿ��һ����¼������
ѧ�� ���� �Ա� ���� �÷� ��ַ*/
#include<bits/stdc++.h>
using namespace std;
typedef struct student
{
	char num[20];
	char name[40];
	char sex;
	int age;
	float score;
	char address[40];
	struct student *next;
 } Node;
 
 #define LEN sizeof(Node)
 
 Node *creatList()
 {
 	Node *pHead,*pEnd,*pNew;
 	char s[10] = "end";
 	pHead = pEnd = (Node*)malloc(LEN);
 	int count = 1;
 	while(1)
 	{
 		if(count == 1)
 		{
 			scanf("%s",&pEnd->num);
 			if(strcmp(pEnd->num,s) == 0)
 				break;
 			scanf("%s %c %d %f %s",&pEnd->name,&pEnd->sex,
			 &pEnd->age,&pEnd->score,&pEnd->address);
			pEnd->next = NULL;
			count++;
		 }
		 else
		 {
		 	pNew = (Node*)malloc(LEN);
		 	scanf("%s",&pNew->num);
		 	if(strcmp(pNew->num,s) == 0)
		 		break;
		 	scanf("%s %c %d %f %s",&pNew->name,&pNew->sex,
			 &pNew->age,&pNew->score,&pNew->address);
			 pNew->next = NULL;
			 pEnd->next = pNew;
			 pEnd = pNew;
			 count++;
		 }
	 }
	 return pHead;
 }
 
 Node *ReverseList(Node *pHead)
 {
 	Node *p = pHead,*q = p->next,*r;
 	p->next = NULL;
 	while(q)
 	{
 		r = q->next;
 		q->next = p;
 		p = q;
 		q = r;
	 }
	return p;
 }
 
 void PrintList(Node *pHead)
 {
 	Node *p = pHead;
 	while(p)
 	{
 		printf("%s %s %c %d %g %s\n",p->num,p->name,p->sex,
		 	p->age,p->score,p->address);
		p = p->next;
	 }
 }
 
 int main()
 {
 	Node *pHead = creatList();
 	pHead = ReverseList(pHead);
 	PrintList(pHead);
 	return 0;
 }
