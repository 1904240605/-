/*����
�ø߾��ȼ����S=1!+2!+3!+��+n!��n��50��

���С�!����ʾ�׳ˣ����磺5!=5*4*3*2*1��

����������N�����������S��

����
һ��������N��
���
������S��*/

#include<bits/stdc++.h>
using namespace std;
int change(int *a,int x)
{
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
			return x;
}
int main()
{
	int n;
	cin>>n;
	int a[100]={1,1},ans[100]={0,0};
	int x=1;//λ�� 
	for(int i=1;i<=n;i++)//�߾��� 
	{
		for(int j=1;j<=x;j++)
			a[j]=a[j]*i;
			int j;
			x=change(a,x);
			for(j=1;j<=x;j++)
			ans[j]+=a[j];
	}
	x=change(ans,x);
	for(int i=x;i>=1;i--)
	cout<<ans[i];
	cout<<endl;
	return 0;
}
