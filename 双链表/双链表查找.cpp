#include<bits/stdc++.h>
using namespace std;
struct node
{
	int num;
	struct node *prior;
    struct node *next;
};
int main()
{
	struct node *head,*q,*tail,*p;
	q=head=tail=NULL;
	int n,x;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&x);
		p=(struct node*)malloc(sizeof(struct node));
		p->num=x;
		p->next=p->prior=NULL;
		if(head==NULL)
		{
			head=tail=p;
		}
		else
		{
			tail->next=p;
			p->prior=tail;
		}
		tail=p;
	}
	int num;
	cin>>num;
	while(head!=NULL)
	{
		if(head->num==num)
		{
			if((head->prior!=NULL)&&(head->next!=NULL))
			cout<<head->prior->num<<" "<<head->next->num<<endl;
			else
			{
				if(head->prior!=NULL)cout<<head->prior->num<<endl;
				if(head->next!=NULL)cout<<head->next->num<<endl;
			}
			return 0;
		}
		head=head->next;
	}
	return 0;
}
