/*描述
已知正整数满足2<=k<=9，现给出长度最大为30位的十进制非负整数c，求所有能整除c的k。

输入
一个非负整数c，c的位数<=30。 
输出
若存在满足 c%k == 0 的k，从小到大输出所有这样的k，相邻两个数之间用单个空格隔开；
若没有这样的k，则输出"none"。*/

/*   思路 
本题为高精度除以单精度的简化版，高精度除以单精度需要用一个数组存储每次（新的被除数）/k的结果。
而本题只需要每次都存储新的被除数，判断最后（新的被除数）%k的结果是否能整除即可。
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[40];
	string s;
	cin>>s;
	int flag =0;
	int n=s.length();
	for(int i=0;i<n;i++)
	a[i]=s[i]-'0';
	for(int i=2;i<=9;i++)
	{
		int x=0;//新的被除数
		for(int j=0;j<n;j++)
		{
			x=x*10+a[j];
			x=x%i;
		 } 
		 if(!x)
		 {
		 	flag=1;
		 	cout<<i<<" ";
		 }
	}
	if(!flag)
	cout<<"none\n";
	return 0;
}
