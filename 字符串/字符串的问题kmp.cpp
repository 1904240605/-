/*��Ŀ���� 
��һ���ַ��� �����ҵ�����ַ��� S ������Ӵ�T ����Ӵ� T �������㼴ʹ�������ǰ׺ Ҳ�����
���ĺ�׺ ���� ���ַ�����Ҳ���ֹ�һ�ε�(��ʾ Ҫ������ǰ��׺��ͬʱҲҪ���ַ����г���һ�� ֻ��ǰ
��׺�ɲ��� ��������Ҫ���ַ���)
��������:
����һ���ַ��� ���� 1 �� 1e6  ȫ����Сд��ĸ
�������:
����ҵĵ����������Ӵ�T ������о���� Just a legend*/
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

