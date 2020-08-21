#include<bits/stdc++.h>
using namespace std;
typedef char Elemtype;
typedef struct DNode
{
    Elemtype data; //���Ԫ��ֵ
    struct DNode * prior; //ָ��ǰ�����
    struct DNode * next; //ָ���̽��
}DLinkNode;
// ��ʼ��˫����
void InitList(DLinkNode *&h)
{
    h=(DLinkNode *)malloc(sizeof(DLinkNode));
    h->prior=h->next=NULL; //ǰ��ָ������Ϊ��
}

// β�巨����
void InsertListR(DLinkNode *&h,Elemtype a[],int n)
{
    DLinkNode *s,*r;
    r=h;
    for(int i=0;i<n;i++)
    {
        s=(DLinkNode *)malloc(sizeof(DLinkNode));
        s->data=a[i];
        r->next=s;
        s->prior=r;
        r=s;
    }
    r->next=NULL;
}

//���˫����
void DispList(DLinkNode *h)
{
    DLinkNode *p;
    p=h->next;
    while(p!=NULL)
    {
        printf("%c ",p->data);
        p=p->next;
    }
    printf("\n");
}

//���˫����h�ĳ���
int ListLength(DLinkNode *h)
{
    int n=0;
    DLinkNode *p=h->next;
    while(p!=NULL)
    {
        n++;
        p=p->next;
    }
    return(n);
}

//�ж����Ա��Ƿ�Ϊ�ձ�
bool ListEmpty(DLinkNode *h)
{
    return(h->next==NULL);
}

//���ָ���±��Ԫ��
char LocateElemByIndex(DLinkNode *h,int i)
{
    DLinkNode *p=h;
    while(p->next!=NULL&&i)
    {
        i--;
        p=p->next;
    }
    if(p->next==NULL)
    {
        return(false);
    }
    else
        return(p->data);
}

// ���ָ��Ԫ�ص�λ��
int LocateElem(DLinkNode *h,Elemtype e)
{
    int n=1;
    DLinkNode *p=h->next;
    while(p!=NULL&&p->data!=e)
    {
        n++;
        p=p->next;
    }
    if(p==NULL)
    {
        return(0);
    }else
        return(n);
}

//��ָ��λ�ò���ָ����Ԫ��
bool ListInsert(DLinkNode *&h,int i,Elemtype e)
{
    DLinkNode *p=h,*s;
    int j=0;
    if(i<=0) return(false);
    while(j<i-1&&p!=NULL)
    {
        j++;
        p=p->next;
    }
    if(p==NULL)
    {
        return false;
    }
    s=(DLinkNode *)malloc(sizeof(DLinkNode));
    s->data=e;
    s->prior=p;
    s->next=p->next;
    if(p->next!=NULL)
        p->next->prior=s;
    p->next=s;
    return(true);
}

//ɾ��ָ���±�Ԫ��
bool ListDelete(DLinkNode *&h,int i,Elemtype &e)
{
    DLinkNode *p=h,*q;
    int j=0;
    if(i<=0) return(false);
    while(j<i-1&&p!=NULL)
    {
        j++;
        p=p->next;
    }
    if(p==NULL)
    {
        return(false);
    }else
    {
        q=p->next;
        if(q==NULL)
            return(false);
        e=q->data;
        p->next=q->next;
        if(p->next!=NULL)
            q->prior=p;
        free(q);
        return(true);
    }
}

//�ͷ�ѭ������
void DestroyList(DLinkNode *&h)
{
    DLinkNode *pre=h,*p=h->next;
    while(p!=NULL)
    {
        free(pre);
        pre=p;
        p=p->next;
    }
    free(pre);
    cout<< "List has been destroyed!" <<endl;
}
int main()
{
    DLinkNode *h;
    char e;
    InitList(h);
    char a[5]={'a','b','c','d','e'};
    InsertListR(h,a,5);
    DispList(h);
    cout<< ListLength(h) <<endl;
    if(ListEmpty(h))
    {
        cout<< "List is Empty!"<<endl;
    }else
    {
        cout<<"List isn't Empty!"<<endl;
    };
    cout<< LocateElemByIndex(h,3)<<endl;
    cout<< LocateElem(h,'a')<<endl;
    ListInsert(h,4,'f');
    DispList(h);
    ListDelete(h,3,e);
    DispList(h);
    DestroyList(h);
    return 0;
}
