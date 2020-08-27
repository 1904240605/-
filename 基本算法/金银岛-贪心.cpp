/*描述
某天KID利用飞行器飞到了一个金银岛上，上面有许多珍贵的金属，KID虽然更喜欢各种宝石的艺术品，
可是也不拒绝这样珍贵的金属。但是他只带着一个口袋，口袋至多只能装重量为w的物品。岛上金属有s
个种类, 每种金属重量不同，分别为n1, n2, ... , ns，同时每个种类的金属总的价值也不同，分别为
v1,v2, ..., vs。KID想一次带走价值尽可能多的金属，问他最多能带走价值多少的金属。注意到金属是
可以被任意分割的，并且金属的价值和其重量成正比。
输入
第1行是测试数据的组数k，后面跟着k组输入。

每组测试数据占3行，第1行是一个正整数w (1 <= w <= 10000)，表示口袋承重上限。第2行是一个正整数
s (1 <= s <=100)，表示金属种类。第3行有2s个正整数，分别为n1, v1, n2, v2, ... , ns, vs分别为第
一种，第二种，...，第s种金属的总重量和总价值(1 <= ni <= 10000, 1 <= vi <= 10000)。
输出
k行，每行输出对应一个输入。输出应精确到小数点后2位。*/
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
                result+=(double)(w-size)*(double)a[i].v/a[i].n;//千万不能把a[i].v/a[i].n括住
                break;
            }
            size+=(double)a[i].n;
            result+=(double)a[i].v;
        }
        printf("%.2f\n",result);
        
    }
}

