/*描述
给定一个只包含小写字母的字符串，请你找到第一个仅出现一次的字符。如果没有，输出no。

输入
一个字符串，长度小于100000。
输出
输出第一个仅出现一次的字符，若没有则输出no。*/
#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
string s;

int main()
{
getline(cin,s);
int ll=s.size();
int k;
for(int i=0;i<ll;i++)
{
k=0;
for(int j=0;j<ll;j++)
{
if(s[j]==s[i])
k++;
}
if(k==1)
{
cout<<s[i];
return 0;
}
}
cout<<"no"<<endl;
return 0;
}
