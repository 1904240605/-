/*描述
Pell数列a1, a2, a3, ...的定义是这样的，a1 = 1, a2 = 2, ... , an = 2 * an ? 1 + an - 2 (n > 2)。
给出一个正整数k，要求Pell数列的第k项模上32767是多少。
输入
第1行是测试数据的组数n，后面跟着n行输入。每组测试数据占1行，包括一个正整数k (1 ≤ k < 1000000)。
输出
n行，每行输出对应一个输入。输出应是一个非负整数。*/
#include<cstdio>
int s[1000005]={0,1,2},a[1000005]={0,1,2};
int  fun(int x)
{
    if(x<=2) return x;

            else if(s[x]) return s[x];
else {
                s[x]=(2*fun(x-1)+fun(x-2))%32767;
                return s[x];
            } 
} 


int main()
{
    int  n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
    printf("%d\n",fun(a[i]));
}
