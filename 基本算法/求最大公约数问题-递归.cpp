/*描述
给定两个正整数，求它们的最大公约数。

输入
输入一行，包含两个正整数(<1,000,000,000)。
输出
输出一个正整数，即这两个正整数的最大公约数。*/
#include<iostream>
using namespace std;
//辗转相除法 
int a,b,res;
void f(int a,int b){
    int z=a%b;
    if(z==0){
        res=b;
        return;
    }
    else return f(b,a%b);
}
int main(){
    cin>>a>>b;
    int x=max(a,b);
    int y=min(a,b);
    f(x,y);
    cout<<res<<endl;
}
