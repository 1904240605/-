/*题目描述 
有一个字符串 让你找到这个字符串 S 里面的子串T 这个子串 T 必须满足即使这个串的前缀 也是这个
串的后缀 并且 在字符串中也出现过一次的(提示 要求满足前后缀的同时也要在字符串中出现一次 只是前
后缀可不行 输出最长满足要求字符串)
输入描述:
给出一个字符串 长度 1 到 1e6  全部是小写字母
输出描述:
如果找的到就输出这个子串T 如果不行就输出 Just a legend*/
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int nxt[1001000];
void getnext(string p) {
    int len = p.size();
    int i = 0, j = -1;
    nxt[0] = -1;
    while (i < len) {
        if (j == -1 || p[i] == p[j])
            i++, j++, nxt[i] = j;
        else
            j = nxt[j];
    }
}
int res[1001000];
int main() {
    string s;
    cin >> s;
    getnext(s);
    int n = s.size();
    for (int i = 1; i < n; i++)
        res[nxt[i]]++;
    int ans = nxt[n];
    while (ans) {
        if (res[ans]) {
            for (int i = 0; i < ans; i++)
                cout << s[i];
            return 0;
        }
        ans = nxt[ans];
    }
    cout << "Just a legend" << endl;
    return 0;
}

