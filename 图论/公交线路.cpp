/*题目描述 
P市有n个公交站，之间连接着m条道路。P市计划新开设一条公交线路，该线路从城市的东站（s点）
修建到西站（t点），请为P市设计一条满足上述条件并且最短的公交线路图。
输入描述:
第一行有5个正整数n，m，s，t。
接下来m行，每行3个数a,b,v描述一条无向道路a——b，长度为v。
输出描述:
如果有解，输出一行，表示满足条件的最短公交线路的长度c。
否则，输出“-1”*/
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
