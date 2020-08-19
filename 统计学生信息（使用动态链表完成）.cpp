/*
描述
利用动态链表记录从标准输入输入的学生信息（学号、姓名、性别、年龄、得分、地址）

其中,学号长度不超过20, 姓名长度不超过40, 性别长度为1, 地址长度不超过40

输入
包括若干行，每一行都是一个学生的信息，如：
00630018 zhouyan m 20 10.0 28#460
输入的最后以"end"结束
输出
将输入的内容倒序输出
每行一条记录，按照
学号 姓名 性别 年龄 得分 地址*/
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
