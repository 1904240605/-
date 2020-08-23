#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n,min,max;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	min=max=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]<min)min=a[i];
		if(a[i]>max)max=a[i];
	}
	int d=max-min+1;
	int b[d];
	memset(b,0,sizeof(b));
	for(int i=0;i<n;i++)
		b[a[i]-min]++;
	for(int i=0;i<d;i++)
	{
		while(b[i]>0)
		{
			cout<<i+min<<" ";
			b[i]--;
		}
	}
	return 0;
}
