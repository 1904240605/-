/*描述
一个长度为n（n>0）的序列中存在“有趣的跳跃”当前仅当相邻元素的差的绝对值经过排序后正好是从1到(n-1)
。例如，1 4 2 3存在“有趣的跳跃”，因为差的绝对值分别为3,2,1。当然，任何只包含单个元素的序列一定存
在“有趣的跳跃”。你需要写一个程序判定给定序列是否存在“有趣的跳跃”。

输入
一行，第一个数是n（0 < n < 3000），为序列长度，接下来有n个整数，依次为序列中各元素，各元素的绝对值
均不超过1,000,000,000。
输出
一行，若该序列存在“有趣的跳跃”，输出"Jolly"，否则输出"Not jolly"。*/
#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main (void)
{
	int n,o=0;
	cin>>n;
	
	int a[n+1];
	for(int i=1;i<=n;i++)
	cin>>a[i];
	
	int c[n-1];
	for(int m=1;m<=n-1;m++)
	c[m]=fabs(a[m+1]-a[m]);
	int b[n-1];
	for(int d=1;d<=n-1;d++)
	{
		b[c[d]]=1;
    }
    for(int x=1;x<=n-1;x++)
    {
    	if(b[x]==1)
    	continue;
    	else
        {
        	cout<<"Not jolly";o=1;break;
		}
    	
	}
	if(o==0)
	{cout<<"Jolly";}
	return 0;
}
