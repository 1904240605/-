/*����
������������ĳ˷���n*m�׵ľ���A����m*k�׵ľ���B�õ��ľ���C ��n*k�׵ģ���
C[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j] + ���� +A[i][m-1]*B[m-1][j]
(C[i][j]��ʾC�����е�i�е�j��Ԫ��)��

����
��һ��Ϊn, m, k����ʾA������n��m�У�B������m��k�У�n, m, k��С��100
Ȼ���Ⱥ�����A��B��������A����n��m�У�B����m��k�У�������ÿ��Ԫ�صľ���ֵ�������1000��
���
�������C��һ��n�У�ÿ��k������������֮����һ���ո�ֿ���*/
#include<bits/stdc++.h>
using namespace std;
int a[110][110];
int b[110][110];
int c[110][110];
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>a[i][j];  //��ȡa�����ֵ 
	for(int i=1;i<=m;i++)
		for(int j=1;j<=k;j++)
			cin>>b[i][j]; //��ȡb�����ֵ 
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=k;j++)
		{
			for(int l=1;l<=m;l++)
			{
				c[i][j]+=a[i][l]*b[l][j]; //����c�����ֵ 
			}
			cout<<c[i][j]<<' '; //���c���� 
		}
		cout<<endl;
	}
	return 0;
}
