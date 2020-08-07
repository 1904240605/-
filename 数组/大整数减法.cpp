/*
描述
求两个大的正整数相减的差。

输入
共2行，第1行是被减数a，第2行是减数b(a > b)。每个大整数不超过200位，不会有多余的前导零。
输出
一行，即所求的差。
*/
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
char a[220],b[220];
int x[220],y[220],z[220];
int main () {
int lena,lenb;
scanf("%s",a);
lena=strlen(a);
for (int i=lena-1,j=0;i>=0;i--,j++)
x[j]=a[i]-'0';
scanf("%s",b); 
lenb=strlen(b);
for (int i=lenb-1,j=0;i>=0;i--,j++)
y[j]=b[i]-'0';
if (a[0]-'0'==0&&b[0]-'0'==0) {cout<<"0";return 0;} 
if (lena>=lenb) lenb=lena;
for (int j=0;j<lenb;j++)
z[j]=x[j]-y[j];
for (int j=0;j<lenb;j++)
{
	if(z[j]<0)
{
z[j+1]=z[j+1]-1;
z[j]=z[j]+10;
}
}
while (!z[lenb]) lenb--;
for (int i=lenb;i>=0;i--)
printf ("%d",z[i]);
return 0;
}
