#include<bits/stdc++.h>
using namespace std;
int a[100],b[200],n;
void _merge(int l,int mid,int r)//归并
{
	int p1=l,p2=mid+1;
	for(int i=l;i<=r;i++)
	{
		//两段各个数比较大小存入9 
		if(((p1<=mid)&&(p2>r))||(a[p1]<a[p2]))
		{
			b[i]=a[p1];
			p1++;
		}
		else
		{
			b[i]=a[p2];
			p2++;
		}
	}
	for(int i=l;i<=r;i++)
	a[i]=b[i];
} 
void erfen(int l,int r) //二分 
{
	int mid=(l+r)>>1;
	if(l<r)
	{
		erfen(l,mid);
		erfen(mid+1,r);
	}
	_merge(l,mid,r);
}
int  main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	erfen(1,n);
	for(int i=1;i<=n;i++)
	cout<<a[i]<<" ";
	return 0;
}
