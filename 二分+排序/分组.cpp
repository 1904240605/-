/*题目描述 
一天zzq主持一项游戏，共n位同学，需要两两同学为一组来上台来玩一项游戏。
但是，众所周知，玩游戏的时候，如果两个人的颜值差距>=m，就会互相嫌弃。
所以，为了游戏能够好玩。在游戏开始前，zzq已经调查了所有n个同学的颜值。
但是现在问题又来了，zzq想知道，最多能凑出多少组同学一起上台？
需注意一人只能出现在一个组中。

输入描述:
多组输入
第一行两个正整数n m（n<=1e5,m<=1e9），意义见描述
第二行有n个由空格分开的正整数xi（xi<=1e9），第i个同学的颜值
输出描述:
每一行输出一个数，表示最多能凑出多少组。*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		int a[100001]={0},ans=0;
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		sort(a,a+n);
		for(int i=0;i<n-1;i++)
		if(a[i+1]-a[i]<m) ans++,i++;
		printf("%d\n",ans);
	}
	return 0;
}
