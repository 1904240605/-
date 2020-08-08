/*描述
用高精度计算出S=1!+2!+3!+…+n!（n≤50）

其中“!”表示阶乘，例如：5!=5*4*3*2*1。

输入正整数N，输出计算结果S。

输入
一个正整数N。
输出
计算结果S。*/

#include<bits/stdc++.h>
using namespace std;
int change(int *a,int x)
{
	int j;
		for(j=1;j<=x;j++)
		{
			if(a[j]>=10)
			{
				a[j+1]=a[j+1]+a[j]/10;
				a[j]%=10;
			}
		}
			if(a[j]>0)//进位运算 
			{
				while(a[j]>=10)
				{
					a[j+1]=a[j+1]+a[j]/10;
					a[j]%=10;
					j++;
				}
					x=j;
			}
			return x;
}
int main()
{
	int n;
	cin>>n;
	int a[100]={1,1},ans[100]={0,0};
	int x=1;//位数 
	for(int i=1;i<=n;i++)//高精乘 
	{
		for(int j=1;j<=x;j++)
			a[j]=a[j]*i;
			int j;
			x=change(a,x);
			for(j=1;j<=x;j++)
			ans[j]+=a[j];
	}
	x=change(ans,x);
	for(int i=x;i>=1;i--)
	cout<<ans[i];
	cout<<endl;
	return 0;
}
