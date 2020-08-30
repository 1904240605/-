/*题目描述 
其次，Sεlιнα(Selina) 要进行体力比武竞赛。
在 Sεlιнα 所在的城市，有 NN 个街区，编号为 1 \sim N1～N，总共有 N-1N?1 条的街道连接这些街区， 使得每两个街区之间都直接或间接地有街道将它们相连。Sεlιнα 把通过了文化知识竞赛的参赛男友们召集到她家所在的街区 PP ，并以这个街区为起点，让所有参赛男友们向其他街区跑去。这些参赛者们被命令不准重复跑某条街道，而且在规定时间内要尽可能地跑远。比赛结束后，所有参赛者将停留在他们此时所在的街区。之后 Sεlιнα 开始视察结果。现在她知道每个街区都有一些她的参赛男友停留着，她现在想先去看看离她家第 KK 近的街区。所以作为一位好帮手，你的任务是要告诉她所有街区中，离 Sεlιнα 家第 KK 近的街区与 Sεlιнα 家之间的距离。 
输入描述:
第一行三个整数，N,P,KN,P,K，含义同题面描述。
接下去 N-1N?1 行，每行三个整数，u,v,wu,v,w，表示从第 uu 个街区到第 vv 个街区有一条权值为ww 的街道相连。街区从 11 开始标号。
输出描述:
输出共一行，一个整数，表示所有街区与 Sεlιнα 家所在街区之间最近距离的第 KK 小值。*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+5;
vector<int>G[N],ans;
int n,m,u,v,w,p,k,vis[N],d[N];
map<pair<int,int>,int>W;
void dfs(int u){
    vis[u]=1;
    for(auto v:G[u]){
        if(!vis[v]){
            d[v]=d[u]+W[{min(u,v),max(u,v)}];
            ans.push_back(d[v]);
            dfs(v);
        }
    }
}
int main()
{
    scanf("%d%d%d",&n,&p,&k);
    for(int i=0;i<n-1;i++){
        scanf("%d%d%d",&u,&v,&w);
        W[{min(u,v),max(u,v)}]=w;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    d[p]=0;
    dfs(p);
    sort(ans.begin(),ans.end());
    printf("%d\n",ans[k-1]);
}

