/*描述
编写程序，求给定字符串s的亲朋字符串s1。 

亲朋字符串s1定义如下：给定字符串s的第一个字符的ASCII值加第二个字符的ASCII值，得到第一个亲朋字符；
给定字符串s的第二个字符的ASCII值加第三个字符的ASCII值，得到第二个亲朋字符；依此类推，直到给定字
符串s的倒数第二个字符。亲朋字符串的最 后一个字符由给定字符串s的最后一个字符ASCII值加s的第一个字
符的ASCII值。

输入
输入一行，一个长度大于等于2，小于等于100的字符串。字符串中每个字符的ASCII值不大于63。
输出
输出一行，为变换后的亲朋字符串。输入保证变换后的字符串只有一行。
样例输入*/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char al[100],c;
	int len,a[100];
	gets(al);
	len=strlen(al);
	for(int i=0;i<=len-1;i++)
	{if(i==len-1)
	
	a[i]=al[i]+al[0];
	else
	a[i]=al[i]+al[i+1];
	c=a[i];
	printf("%c",c);
	}
	return 0;
}
