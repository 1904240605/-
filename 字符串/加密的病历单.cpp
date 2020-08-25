/*描述
小英是药学专业大三的学生，暑假期间获得了去医院药房实习的机会。 
在药房实习期间，小英扎实的专业基础获得了医生的一致好评，得知小英在计算概论中取得过好成绩后，
主任又额外交给她一项任务，解密抗战时期被加密过的一些伤员的名单。 
经过研究，小英发现了如下加密规律（括号中是一个“原文 -> 密文”的例子） 
1.  原文中所有的字符都在字母表中被循环左移了三个位置（dec  -> abz） 
2.  逆序存储（abcd -> dcba ） 
3.  大小写反转（abXY -> ABxy） 

输入
一个加密的字符串。（长度小于50且只包含大小写字母）
输出
输出解密后的字符串*/
#include <iostream>
#include <cstring>
using namespace std;
char crack(char ch)
{
    int n;
    // 大小写反转+右移3位
    if (ch>='a'&&ch<='z'){
        ch -= ('a'-'A');
        n = ch-'A';
        n = (n+3)%26;
        ch = n+'A';
    }
    else{
        ch -= ('A'-'a');
        n = ch-'a';
        n = (n+3)%26;
        ch = n+'a';
    }
    return ch;
}
int main()
{
    int j=0;
    string original, cryptograph;
    cin >> cryptograph;
    original = cryptograph;
    for (long i=cryptograph.size()-1; i>=0; i--){
        original[j++] = crack(cryptograph[i]);
    }
    cout << original;
    return 0;
}
