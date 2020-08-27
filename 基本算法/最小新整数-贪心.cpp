/*描述
给定一个十进制正整数n(0 < n < 1000000000)，每个数位上数字均不为0。n的位数为m。
现在从m位中删除k位(0<k < m)，求生成的新整数最小为多少？
例如: n = 9128456, k = 2, 则生成的新整数最小为12456

输入
第一行t, 表示有t组数据；
接下来t行，每一行表示一组测试数据，每组测试数据包含两个数字n, k。
输出
t行，每行一个数字，表示从n中删除k位后得到的最小整数。*/
#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include<cstring> 
using namespace std;
int main()
{
	//string n;
	char n[12];
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		cin>>n>>k;
		//int len=n.length();  //string字符串的长度
		int len =strlen(n);      //char字符数组的长度
		while(k--)
		{	
			for(int i=0;i<len-1;i++)//len-1,防止越界问题，下面有n[i+1]
			{
				if((n[i]-'0')>(n[i+1])-'0')
				{
					for(int j=i;j<len-1;j++)//len-1,防止越界问题，下面有n[i+1]
					{
						n[j]=n[j+1];
					}
					break;
				}
			}
			len--;
		}
		while(n[0]=='0')//删除前导0（我方法很笨，不要在意）  
        {  
            for(int i=0;i<len-1;i++)  
                n[i]=n[i+1];  
            len--;  
        }  
        if(n[0]==0)//处理删到没有（全是“\0”）的情况  
			cout<<0<<endl;
        else  
			for(int x=0;x<len;x++)
			{
				cout<<n[x];
			}
			cout<<endl;
	}
 
	return 0;
}
