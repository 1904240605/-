#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int n, m, e, ans = 0,
link[N]; bool vis[N];//link[v]��ʾv����ĵ㣬 vis��ʾĳ�����Ƿ񱻷��ʹ���
vector<int> g[4*N];//vector��ͼ
//���
inline int read() {
       register int x = 0, t = 1; register char ch = getchar();
       while ((ch < '0' || ch > '9') && ch != '-')ch = getchar();
       if (ch=='-') { t = -1; ch = getchar(); }
       while (ch >= '0' && ch <= '9'){ x = (x<<3) + (x<<1) + (ch^48); ch = getchar(); }
       return x*t;
}
//�㷨����
bool dfs(int x) {
    for (int i = 0; i < g[x].size(); i++) {
        int v = g[x][i];
                //���û������
        if (!vis[v]) {
            vis[v] = 1;
            if (link[v] == -1 || dfs(link[v])) { //����v��û�б���ԣ��Ͱ�v��Ը�x��������link[v]�ڳ�v������
                link[v] = x; //��v���ӵ�x
                return 1; //��ʾx����Ե���
            }
        }
    } return 0; //x������Ե���
}
 
int main() {
    memset(link, -1, sizeof(link));
    n = read(), m = read(), e = read();
    for (int i = 1; i <= e; i++) {
        int u = read(), v = read();
        if (u > n || v > m || u < 1 || v < 1) continue;
        g[u].push_back(v+n); //���ߣ�ע��һ��Ҫ�ǵ����
    } for (int i = 1; i <= n; i++) {
        memset(vis, 0, sizeof(vis));
        if (dfs(i)) ans++; //�����ƥ�䵽�𰸼�һ
    } cout << ans;
    return 0;
}  
