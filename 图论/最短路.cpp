/*题目描述 
简单暴力的题目要求：
给定一个有n个顶点（从1到n编号），m条边的有向图（其中某些边权可能为负，但保证没有负环）。请你计算从1号点到其他点的最短路。
输入描述:
第一行两个整数n, m。
接下来的m行，每行有三个整数u, v, l，表示u到v有一条长度为l的边。
输出描述:
共n-1行，第i行表示1号点到i+1号点的最短路。*/
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
