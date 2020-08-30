#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int n, m, e, ans = 0,
link[N]; bool vis[N];//link[v]表示v连向的点， vis表示某个点是否被访问过。
vector<int> g[4*N];//vector存图
//快读
inline int read() {
       register int x = 0, t = 1; register char ch = getchar();
       while ((ch < '0' || ch > '9') && ch != '-')ch = getchar();
       if (ch=='-') { t = -1; ch = getchar(); }
       while (ch >= '0' && ch <= '9'){ x = (x<<3) + (x<<1) + (ch^48); ch = getchar(); }
       return x*t;
}
//算法核心
bool dfs(int x) {
    for (int i = 0; i < g[x].size(); i++) {
        int v = g[x][i];
                //如果没被访问
        if (!vis[v]) {
            vis[v] = 1;
            if (link[v] == -1 || dfs(link[v])) { //若是v还没有被配对，就把v配对给x，否则让link[v]腾出v给它。
                link[v] = x; //把v连接到x
                return 1; //表示x能配对到点
            }
        }
    } return 0; //x不能配对到点
}
 
int main() {
    memset(link, -1, sizeof(link));
    n = read(), m = read(), e = read();
    for (int i = 1; i <= e; i++) {
        int u = read(), v = read();
        if (u > n || v > m || u < 1 || v < 1) continue;
        g[u].push_back(v+n); //建边，注意一定要是单向边
    } for (int i = 1; i <= n; i++) {
        memset(vis, 0, sizeof(vis));
        if (dfs(i)) ans++; //如果能匹配到答案加一
    } cout << ans;
    return 0;
}  
