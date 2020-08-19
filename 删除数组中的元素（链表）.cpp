/*描述
给定N个整数，将这些整数中与M相等的删除 
输入
输入包含3行：
第一行是一个整数n(1 <= n <= 200000)，代表数组中元素的个数。
第二行包含n个整数，代表数组中的n个元素。每个整数之间用空格分隔；每个整数的取值在32位
有符号整数范围以内。
第三行是一个整数k，代表待删除元素的值（k的取值也在32位有符号整数范围内）。
输出
输出只有1行：
将数组内所有待删除元素删除以后，输出数组内的剩余元素的值，每个整数之间用空格分隔。*/
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int num;
	struct node *next;
};
int main()
{
	int n;
	cin>>n;
	struct node *head,*p,*tail,*q;
	tail=head=NULL;int x;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&x);
		p=(struct node*)malloc(sizeof(struct node));
		p->num=x;
		p->next=NULL;
		if(head==NULL)
		head=tail=p;
		else
		{
			tail->next=p;
			tail=p;
		}
	}
	int m;cin>>m;
	p=q=head;
	while(q!=NULL)
	{
		if(m==q->num)
		{
			if(q==head)
			head=q->next;
			else
			p->next=q->next;
		}
		else
			p=q;
		q=q->next;
	}
	while(head!=NULL)
	{
		cout<<head->num<<" ";
		head=head->next;
	}
	return 0;
}
