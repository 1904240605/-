/*����
����һ���ַ���ͳ�Ƴ����������ַ��ĸ�����

����
һ���ַ������ܳ��Ȳ�����255��
���
���Ϊ1�У�����ַ������������ַ��ĸ�����*/
#include<iostream>
using namespace std;
int main ()
{
	int i=0,m,x=0;
	char a[255];
	while((a[i]=getchar())!='\n')
	i++;
	a[i]='n';
	for(m=0;m<=i;m++)
	{
		if(a[m]>='0'&&a[m]<='9')
		x++;
	}
	cout<<x;
	return 0;
}
