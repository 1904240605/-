/*����
����һ��ֻ����Сд��ĸ���ַ����������ҵ���һ��������һ�ε��ַ������û�У����no��

����
һ���ַ���������С��100000��
���
�����һ��������һ�ε��ַ�����û�������no��*/
#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
string s;

int main()
{
getline(cin,s);
int ll=s.size();
int k;
for(int i=0;i<ll;i++)
{
k=0;
for(int j=0;j<ll;j++)
{
if(s[j]==s[i])
k++;
}
if(k==1)
{
cout<<s[i];
return 0;
}
}
cout<<"no"<<endl;
return 0;
}
