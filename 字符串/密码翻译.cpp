/*描述
在情报传递过程中，为了防止情报被截获，往往需要对情报用一定的方式加密，简单的加密算法虽然不足以完
全避免情报被破译，但仍然能防止情报被轻易的识别。我们给出一种最简的的加密方法，对给定的一个字符串，
把其中从a-y，A-Y的字母用其后继字母替代，把z和Z用a和A替代，其他非字母字符不变，则可得到一个简单的
加密字符串。

输入
输入一行，包含一个字符串，长度小于80个字符。
输出
输出每行字符串的加密字符串。*/
#include<iostream>
using namespace std;
#include<cstdio>
#include<string.h>
int main()
{
	char x[80];
	gets(x);
	int i,n;
	n=strlen(x);
	for(i=0;i<n;i++)
	{
		if((x[i]>='a'&&x[i]<'z')||(x[i]>='A'&&x[i]<'Z'))
		x[i]+=1;
		else if(x[i]=='z')
		x[i]='a';
		else if(x[i]=='Z')
		x[i]='A';
	}
	for(i=0;i<n;i++)
	cout<<x[i];
	return 0;
}
