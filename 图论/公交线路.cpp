/*��Ŀ���� 
P����n������վ��֮��������m����·��P�мƻ��¿���һ��������·������·�ӳ��еĶ�վ��s�㣩
�޽�����վ��t�㣩����ΪP�����һ��������������������̵Ĺ�����·ͼ��
��������:
��һ����5��������n��m��s��t��
������m�У�ÿ��3����a,b,v����һ�������·a����b������Ϊv��
�������:
����н⣬���һ�У���ʾ������������̹�����·�ĳ���c��
���������-1��*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF= 1e9+7;
ll dis[1005];
ll v[20005],u[20005],w[20005];
int init(int n){
    for(int i=1;i<=n;i++) dis[i]=INF;
}
int main(){
    int n,m,s,t;
    cin>>n>>m>>s>>t;
    init(n);
    int head=0;
    int a,b,c;
    for(int i=1;i<=m;i++){
        cin>>a>>b>>c;
        u[++head]=a;v[head]=b;w[head]=c;
        v[++head]=a;u[head]=b;w[head]=c;
    }
    dis[s]=0;
    for(int k=1;k<=n-1;k++)
        for(int i=1;i<=m*2;i++) dis[v[i]]=min(dis[v[i]],dis[u[i]]+w[i]);
    if(dis[t]==INF)cout<<-1<<endl;
    else cout<<dis[t]<<endl;
return 0;
}
