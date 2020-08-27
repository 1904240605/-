/*描述
输入一行字符，统计出其中数字字符的个数。

输入
一行字符串，总长度不超过255。
输出
输出为1行，输出字符串里面数字字符的个数。*/
#include<iostream>
using namespace std;
int main ()
{
	int i=0,m,x=0;
	char a[255];
	while((a[i]=getchar())!='\n')
	i++;
	a[i]='n';
	for(m=0;m<=i;m++)
	{
		if(a[m]>='0'&&a[m]<='9')
		x++;
	}
	cout<<x;
	return 0;
}
