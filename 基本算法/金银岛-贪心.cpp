/*����
ĳ��KID���÷������ɵ���һ���������ϣ�������������Ľ�����KID��Ȼ��ϲ�����ֱ�ʯ������Ʒ��
����Ҳ���ܾ��������Ľ�����������ֻ����һ���ڴ����ڴ�����ֻ��װ����Ϊw����Ʒ�����Ͻ�����s
������, ÿ�ֽ���������ͬ���ֱ�Ϊn1, n2, ... , ns��ͬʱÿ������Ľ����ܵļ�ֵҲ��ͬ���ֱ�Ϊ
v1,v2, ..., vs��KID��һ�δ��߼�ֵ�����ܶ�Ľ�������������ܴ��߼�ֵ���ٵĽ�����ע�⵽������
���Ա�����ָ�ģ����ҽ����ļ�ֵ�������������ȡ�
����
��1���ǲ������ݵ�����k���������k�����롣

ÿ���������ռ3�У���1����һ��������w (1 <= w <= 10000)����ʾ�ڴ��������ޡ���2����һ��������
s (1 <= s <=100)����ʾ�������ࡣ��3����2s�����������ֱ�Ϊn1, v1, n2, v2, ... , ns, vs�ֱ�Ϊ��
һ�֣��ڶ��֣�...����s�ֽ��������������ܼ�ֵ(1 <= ni <= 10000, 1 <= vi <= 10000)��
���
k�У�ÿ�������Ӧһ�����롣���Ӧ��ȷ��С�����2λ��*/
#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
struct point {
    int n,v;
    
};
bool compare(point a,point b){
    return a.v/a.n>b.v/b.n;
}
int main(){
    int k;
    cin>>k;
    while(k--){
        int w,s;
        cin>>w>>s;
        point a[s];
        for(int i=0;i<s;i++){
            point tmp;
            cin>>tmp.n>>tmp.v;
            a[i]=tmp;
        }
        sort(a,a+s,compare);
        double size=0.0,result=0.0;
        for(int i=0;i<s;i++){
            if(size+a[i].n>=w){
                result+=(double)(w-size)*(double)a[i].v/a[i].n;//ǧ���ܰ�a[i].v/a[i].n��ס
                break;
            }
            size+=(double)a[i].n;
            result+=(double)a[i].v;
        }
        printf("%.2f\n",result);
        
    }
}

