/*����
��10000����n�Ľ׳ˡ�

����
ֻ��һ�����룬����n��0<=n<=10000����
���
һ�У���n!��ֵ��*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[500000];
	a[0]=a[1]=1;
	int x=1;//λ�� 
	for(int i=1;i<=n;i++)//�߾��� 
	{
		for(int j=1;j<=x;j++)
			a[j]=a[j]*i;
			int j;
		for(j=1;j<=x;j++)
		{
			if(a[j]>=10)
			{
				a[j+1]=a[j+1]+a[j]/10;
				a[j]%=10;
			}
		}
			if(a[j]>0)//��λ���� 
			{
				while(a[j]>=10)
				{
					a[j+1]=a[j+1]+a[j]/10;
					a[j]%=10;
					j++;
				}
					x=j;
			}
	}
	for(int i=x;i>=1;i--)
	cout<<a[i];
	cout<<endl;
	return 0;
}
