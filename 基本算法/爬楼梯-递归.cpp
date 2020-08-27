/*描述
树老师爬楼梯，他可以每次走1级或者2级，输入楼梯的级数，求不同的走法数
例如：楼梯一共有3级，他可以每次都走一级，或者第一次走一级，第二次走两级
也可以第一次走两级，第二次走一级，一共3种方法。

输入
输入包含若干行，每行包含一个正整数N，代表楼梯级数，1 <= N <= 30
输出
不同的走法数，每一行输入对应一行输出*/
#include<iostream>
using namespace std;
int n,res;
int f(int x){
    if(x==1)return 1;
    if(x==2)return 2;
    if(x>2)return f(x-1)+f(x-2);
}
int main(){
    while(cin>>n){
        res=f(n);
        cout<<res<<endl;
    }
}
