/*描述
医生在书写药品名的时候经常不注意大小写，格式比较混乱。现要求你写一个程序将医生书写混乱的药品
名整理成统一规范的格式，即药品名的第一个字符如果是字母要大写，其他字母小写。如将ASPIRIN、aspirin
整理成Aspirin。

输入
第一行一个数字n，表示有n个药品名要整理，n不超过100。
接下来n行，每行一个单词，长度不超过20，表示医生手书的药品名。药品名由字母、数字和-组成。
输出
n行，每行一个单词，对应输入的药品名的规范写法。*/
#include <iostream>
#include <cstring>
using namespace std;
char convert(char ch, bool first)
{
    if (first){
        if (ch>='a'&&ch<='z'){
            ch -= ('a'-'A');
        }
    }
    else{
        if (ch>='A'&&ch<='Z'){
            ch -= ('A'-'a');
        }
    }
    return ch;
}
int main()
{
    int n;
    string s;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> s;
        cout << convert(s[0], true);
        for (int j=1; j<s.size(); j++){
            cout << convert(s[j], false);
        }
        cout << endl;
    }
    return 0;
}
