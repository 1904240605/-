/*����
���������������������ǵ����Լ����

����
����һ�У���������������(<1,000,000,000)��
���
���һ�����������������������������Լ����*/
#include<iostream>
using namespace std;
//շת����� 
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
