/*����
����һ���ɲ�ͬ��Сд��ĸ��ɵ��ַ������������ַ���������ȫ���С� ���Ǽ������Сд��ĸ��
'a' < 'b' < ... < 'y' < 'z'�����Ҹ������ַ����е���ĸ�Ѿ����մ�С�����˳�����С�

����
����ֻ��һ�У���һ���ɲ�ͬ��Сд��ĸ��ɵ��ַ�������֪�ַ����ĳ�����1��6֮�䡣
���
�������ַ������������з�ʽ��ÿ��һ�����С�Ҫ����ĸ��Ƚ�С��������ǰ�档��ĸ�����¶��壺

��֪S = s1s2...sk , T = t1t2...tk����S < T �ȼ��ڣ�����p (1 <= p <= k)��ʹ��
s1 = t1, s2 = t2, ..., sp - 1 = tp - 1, sp < tp������*/
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
                vis[i]=0;  //����
            }
    }
}
int main(){
    scanf("%s",&a);
    len=strlen(a);
    fx(0);
    return 0;
}
