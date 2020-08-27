/*描述
给定一个由不同的小写字母组成的字符串，输出这个字符串的所有全排列。 我们假设对于小写字母有
'a' < 'b' < ... < 'y' < 'z'，而且给定的字符串中的字母已经按照从小到大的顺序排列。

输入
输入只有一行，是一个由不同的小写字母组成的字符串，已知字符串的长度在1到6之间。
输出
输出这个字符串的所有排列方式，每行一个排列。要求字母序比较小的排列在前面。字母序如下定义：

已知S = s1s2...sk , T = t1t2...tk，则S < T 等价于，存在p (1 <= p <= k)，使得
s1 = t1, s2 = t2, ..., sp - 1 = tp - 1, sp < tp成立。*/
#include<bits/stdc++.h>
using namespace std;
char a[10],b[10];bool vis[10];
int len;
void fx(int num){
    if(num==len){
        for(int i=0;i<len;i++)printf("%c",b[i]);
        printf("\n");
    }else{
        for(int i=0;i<len;i++)
            if(!vis[i]){
                b[num]=a[i];
                vis[i]=1;
                fx(num+1);
                vis[i]=0;  //回溯
            }
    }
}
int main(){
    scanf("%s",&a);
    len=strlen(a);
    fx(0);
    return 0;
}
