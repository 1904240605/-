/*��Ŀ���� 
�򵥱�������ĿҪ��
����һ����n�����㣨��1��n��ţ���m���ߵ�����ͼ������ĳЩ��Ȩ����Ϊ��������֤û�и���������������1�ŵ㵽����������·��
��������:
��һ����������n, m��
��������m�У�ÿ������������u, v, l����ʾu��v��һ������Ϊl�ıߡ�
�������:
��n-1�У���i�б�ʾ1�ŵ㵽i+1�ŵ�����·��*/
#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
const int inf=2e9;
int n,m,dis[20005],bak[20005],u[maxn],v[maxn],w[maxn];
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=m;i++) scanf("%d%d%d",&u[i],&v[i],&w[i]);
	for(int i=1;i<=n;i++)	dis[i]=inf;
	dis[1]=0;
	for(int i=1;i<n;i++){
		for(int k=1;k<=n;k++)	bak[k]=dis[k];
		for(int j=1;j<=m;j++){
			if(dis[v[j]]>dis[u[j]]+w[j])
			dis[v[j]]=dis[u[j]]+w[j]; 
		}
		int check=0;
		for(int k=1;k<=n;k++){
			if(bak[k]!=dis[k]){
				check=1;
				break;
			}
		}
		if(check==0)	break;
	}
	for(int i=2;i<=n;i++)	printf("%d\n",dis[i]);
	return 0;
} 
