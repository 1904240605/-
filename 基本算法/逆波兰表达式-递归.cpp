/*����
�沨�����ʽ��һ�ְ������ǰ�õ��������ʽ��������ͨ�ı��ʽ2 + 3���沨����ʾ��Ϊ+ 2 3��
�沨�����ʽ���ŵ��������֮�䲻�������ȼ���ϵ��Ҳ���������Ÿı������������(2 + 3) * 4
���沨����ʾ��Ϊ* + 2 3 4����������沨�����ʽ��ֵ���������������+ - * /�ĸ���
����
����Ϊһ�У������������������֮�䶼�ÿո�ָ����������Ǹ�������
���
���Ϊһ�У����ʽ��ֵ��
��ֱ����printf("%f\n", v)������ʽ��ֵv��*/
#include <bits/stdc++.h>
using namespace std;
char s[110];
double fx(){
    scanf("%s",&s);
    int len=strlen(s);
    if(len==1 && (s[0]<'0'||s[0]>'9')){
        switch(s[0]){
            case '+':return fx()+fx();
            case '-':return fx()-fx();
            case '*':return fx()*fx();
            case '/':return fx()/fx();
        }
    }else return atof(s);
}
int main(){
    printf("%f\n", fx());
    return 0;
}
