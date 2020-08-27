/*描述
把M个同样的苹果放在N个同样的盘子里，允许有的盘子空着不放，问共有多少种不同的分法？（用K表示）
5，1，1和1，5，1 是同一种分法。
输入
第一行是测试数据的数目t（0 <= t <= 20）。以下每行均包含二个整数M和N，以空格分开。1<=M，N<=10。
输出
对输入的每组数据M和N，用一行输出相应的K。*/
#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
int dg(int m,int n)//m个苹果放到n个盘子里 
{
	if(m==1 || m==0 || n==1) return 1;//判断只有一个方法放苹果的情况 
	else if(m<n) return dg(m,m);
	//否则判断苹果数是否少于盘子数，如果少，那么肯定有n-m个空盘子
	//所以只要做把m个苹果放到m个盘子里 
	else return dg(m-n,n)+dg(m,n-1);
	//否则m-n个盘子起码有一个苹果，即只要把m-n个苹果放到n个盘子里
	//还要加上这个盘子不放的情况 
} 
int main()
{
	int t;
	cin>>t;
	while(t)
	{
  	    int m,n;
    	cin>>m>>n;
    	cout<<dg(m,n)<<endl;
    	t--;
    }
}
