/*����
����һ��ʮ����������n(0 < n < 1000000000)��ÿ����λ�����־���Ϊ0��n��λ��Ϊm��
���ڴ�mλ��ɾ��kλ(0<k < m)�������ɵ���������СΪ���٣�
����: n = 9128456, k = 2, �����ɵ���������СΪ12456

����
��һ��t, ��ʾ��t�����ݣ�
������t�У�ÿһ�б�ʾһ��������ݣ�ÿ��������ݰ�����������n, k��
���
t�У�ÿ��һ�����֣���ʾ��n��ɾ��kλ��õ�����С������*/
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
		//int len=n.length();  //string�ַ����ĳ���
		int len =strlen(n);      //char�ַ�����ĳ���
		while(k--)
		{	
			for(int i=0;i<len-1;i++)//len-1,��ֹԽ�����⣬������n[i+1]
			{
				if((n[i]-'0')>(n[i+1])-'0')
				{
					for(int j=i;j<len-1;j++)//len-1,��ֹԽ�����⣬������n[i+1]
					{
						n[j]=n[j+1];
					}
					break;
				}
			}
			len--;
		}
		while(n[0]=='0')//ɾ��ǰ��0���ҷ����ܱ�����Ҫ���⣩  
        {  
            for(int i=0;i<len-1;i++)  
                n[i]=n[i+1];  
            len--;  
        }  
        if(n[0]==0)//����ɾ��û�У�ȫ�ǡ�\0���������  
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
