/*����
����һ��������a��Ҫ��ֽ�����ɸ��������ĳ˻�����a = a1 * a2 * a3 * ... * an������
1 < a1 <= a2 <= a3 <= ... <= an���������ķֽ�������ж��١�ע�⵽a = aҲ��һ�ַֽ⡣
����
��1���ǲ������ݵ�����n���������n�����롣ÿ���������ռ1�У�����һ��������a (1 < a < 32768)
���
n�У�ÿ�������Ӧһ�����롣���Ӧ��һ����������ָ������Ҫ��ķֽ������*/
#include<bits/stdc++.h>
using namespace std;
int x,ans;
void dfs(int p,int k){ //p��ʾ�˻���k��ʾ��ǰ������
    if(p==x){
        ans++;
        return;
    }
    for(int i=k;i<=x;i++){
        if(p*i>x)break;
        if(x%i==0)dfs(p*i,i);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        ans=0;
        scanf("%d",&x);
        dfs(1,2);
        printf("%d\n",ans);
    }
    return 0;
}

