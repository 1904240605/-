#include <cstdio>
#include <list>
#include <algorithm>
using namespace std;
#define MAX_LENGTH 100001
int main()
{
    int n, m;
    static list<int> plist[MAX_LENGTH];
    static list<int> plist_reverse[MAX_LENGTH];
    while (scanf("%d%d", &n, &m) != EOF)
    {
        for (int i = 1; i <= n; ++i)
        {
            plist[i].clear();
            plist[i].push_back(i);

            plist_reverse[i].clear();
            plist_reverse[i].push_back(i);
        }
        while (m --)
        {
            int a, b;
            scanf("%d%d", &a, &b);
            plist[a].splice(plist[a].end(), plist[b]);
            plist_reverse[b].splice(plist_reverse[b].end(), plist_reverse[a]);
            swap(plist[a], plist_reverse[b]);
            swap(plist_reverse[a], plist_reverse[b]);
        }
        printf("%d", (int)(plist[1].size()));
        for (int e : plist[1])
            printf(" %d", e);
        puts("");
    }
    return 0;
}
