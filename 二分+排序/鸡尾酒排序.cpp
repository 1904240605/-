//ð�ݽ��� 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,value,t;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int tmp;
	for(int i=0;i<n;i++)
	{
		int flag=1;//�����ǣ�ÿһ�ֵĳ�ʼ��true
		//�����֣��������ұȽϺͽ���
		for(int j=i;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				tmp=a[j+1];
				a[j+1]=a[j];
				a[j]=tmp;
				flag=0;
			}
		}
		if(flag)break;
		flag=1;  //ż����֮ǰ�����±��Ϊtrue
		//ż���֣���������ȽϺͽ���
		for(int j=n-i-1;j>i;j--)
		{
			if(a[j]<a[j-1])
			{
				tmp=a[j];
				a[j]=a[j-1];
				a[j-1]=tmp;
				flag=0;
			}
		}
		if(flag)break;
	}
	for(int i=0;i<n;i++)
	cout<<a[i]<<" "; 
    return 0;
}
