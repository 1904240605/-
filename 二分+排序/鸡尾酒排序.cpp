//冒泡进阶 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,value,t;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int tmp;
	for(int i=0;i<n;i++)
	{
		int flag=1;//有序标记，每一轮的初始是true
		//奇数轮，从左向右比较和交换
		for(int j=i;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				tmp=a[j+1];
				a[j+1]=a[j];
				a[j]=tmp;
				flag=0;
			}
		}
		if(flag)break;
		flag=1;  //偶数轮之前，重新标记为true
		//偶数轮，从右向左比较和交换
		for(int j=n-i-1;j>i;j--)
		{
			if(a[j]<a[j-1])
			{
				tmp=a[j];
				a[j]=a[j-1];
				a[j-1]=tmp;
				flag=0;
			}
		}
		if(flag)break;
	}
	for(int i=0;i<n;i++)
	cout<<a[i]<<" "; 
    return 0;
}
