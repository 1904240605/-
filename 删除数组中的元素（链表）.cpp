/*����
����N������������Щ��������M��ȵ�ɾ�� 
����
�������3�У�
��һ����һ������n(1 <= n <= 200000)������������Ԫ�صĸ�����
�ڶ��а���n�����������������е�n��Ԫ�ء�ÿ������֮���ÿո�ָ���ÿ��������ȡֵ��32λ
�з���������Χ���ڡ�
��������һ������k�������ɾ��Ԫ�ص�ֵ��k��ȡֵҲ��32λ�з���������Χ�ڣ���
���
���ֻ��1�У�
�����������д�ɾ��Ԫ��ɾ���Ժ���������ڵ�ʣ��Ԫ�ص�ֵ��ÿ������֮���ÿո�ָ���*/
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
