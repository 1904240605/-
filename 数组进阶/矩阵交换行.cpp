/*
����
����һ��5*5�ľ�����ѧ�ϣ�һ��r��c�ľ�����һ����r��c��Ԫ�����гɵľ������У���
����n�к͵�m�н��������������Ľ����

����
���빲6�У�ǰ5��Ϊ�����ÿһ��Ԫ��,Ԫ����Ԫ��֮����һ���ո�ֿ���
��6�а�����������m��n����һ���ո�ֿ�����1 <= m,n <= 5��
���
�������֮��ľ��󣬾����ÿһ��Ԫ��ռһ�У�Ԫ��֮����һ���ո�ֿ���
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[6][6],m,n;
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		cin>>a[i][j];
	}
	cin>>m>>n;
	for(int i=1;i<=5;i++)
	{
		if(i==m)
		{
			for(int j=1;j<=5;j++)
			cout<<a[n][j]<<" ";
		}
		else if(i==n)
		{
			for(int j=1;j<=5;j++)
			cout<<a[m][j]<<" ";
		}
		else
		{
			for(int j=1;j<=5;j++)
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
