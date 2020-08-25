/*描述
判断两个由大小写字母和空格组成的字符串在忽略大小写，且忽略空格后是否相等。

输入
两行，每行包含一个字符串。
输出
若两个字符串相等，输出YES，否则输出NO。*/
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int i;
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    for (i=0; i<s1.size(); i++){
        while (s1[i] == ' ') s1.erase(i, 1);
        if (s1[i]>='A'&&s1[i]<='Z') s1[i] -= 'A'-'a';
    }
    for (i=0; i<s2.size(); i++){
        while (s2[i] == ' ') s2.erase(i, 1);
        if (s2[i]>='A'&&s2[i]<='Z') s2[i] -= 'A'-'a';
    }
    int x = s1.compare(s2);
    if (x == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

