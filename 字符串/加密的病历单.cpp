/*����
СӢ��ҩѧרҵ������ѧ��������ڼ�����ȥҽԺҩ��ʵϰ�Ļ��ᡣ 
��ҩ��ʵϰ�ڼ䣬СӢ��ʵ��רҵ���������ҽ����һ�º�������֪СӢ�ڼ��������ȡ�ù��óɼ���
�����ֶ��⽻����һ�����񣬽��ܿ�սʱ�ڱ����ܹ���һЩ��Ա�������� 
�����о���СӢ���������¼��ܹ��ɣ���������һ����ԭ�� -> ���ġ������ӣ� 
1.  ԭ�������е��ַ�������ĸ���б�ѭ������������λ�ã�dec  -> abz�� 
2.  ����洢��abcd -> dcba �� 
3.  ��Сд��ת��abXY -> ABxy�� 

����
һ�����ܵ��ַ�����������С��50��ֻ������Сд��ĸ��
���
������ܺ���ַ���*/
#include <iostream>
#include <cstring>
using namespace std;
char crack(char ch)
{
    int n;
    // ��Сд��ת+����3λ
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
