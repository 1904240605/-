/*题目描述 
萌萌哒栗酱有n个点，第i个点有点权ai(ai为偶数)，你可以在任意两点之间添加一条边，每一条边的边权为连接
它的两个点的点权之和除以2。
现在她需要添加n-1条边，使任意两点相互连通，并且连通后的边权和最大。

输入描述:
第一行一个数T，表示有T组数据。
对于每组数据，第一行输入一个数n，表示点的数量，
接下来一行输入n个数，a1,a2,…,an,其中ai表示第i个点的点权。
任意两个相邻数之间用空格隔开。
输出描述:
对于每一组数据，输出一个数，即最大边权和。*/
#include<iostream>
using namespace std;
int main()
{
	int T,n,i,b;
	cin>>T;
	while(T>0)
	{
		int a=0,max=0;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>b;
			a=a+b;
			if(b>max)
			max=b;
		}
		a=(a+(n-2)*max)/2;
		cout<<a<<endl;
		T--;
	}
}
