/*����
�ж������ɴ�Сд��ĸ�Ϳո���ɵ��ַ����ں��Դ�Сд���Һ��Կո���Ƿ���ȡ�

����
���У�ÿ�а���һ���ַ�����
���
�������ַ�����ȣ����YES���������NO��*/
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

