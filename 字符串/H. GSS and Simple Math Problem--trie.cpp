/*Ã‚ƒø√Ë ˆ 
Given n positive integers a1,a2,...,an,your task is to calculate the product of these integers,
The answer is less than 10^{10^5}*/ 
#include<iostream>
#include<cstring>
#include<string>
#include<vector>
#include<queue>
#define lson (rt<<1)
#define rson (rt<<1|1)
#define mp make_pair
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const int MAXN=1111;
const int MOD=(int)1e9+7;
struct BigInt{
    const static int Base=(int)1e9;
    const static int Len=9;
    vector<int>a;
    BigInt(){a={0};}
    BigInt(const char *str,const int &l,const int &r){
        for(int i=r-Len+1;;i-=Len){
            int tmp=0;
            if(i<l){
                for(int j=l;j<i+Len;j++)tmp=tmp*10+str[j]-'0';
                a.push_back(tmp);
                break;
            }
            for(int j=i;j<i+Len;j++)tmp=tmp*10+str[j]-'0';
            a.push_back(tmp);
 
        }
        while(a.back()==0&&a.size()>1)a.pop_back();
    }
    BigInt operator *(const BigInt &b)const{
        BigInt res;
        res.a.resize(a.size()+b.a.size());
        for(int i=0;i<(int)a.size();i++){
            int up=0;
            for(int j=0;j<(int)b.a.size();j++){
                ll tmp=1ll*a[i]*b.a[j]+res.a[i+j]+up;
                res.a[i+j]=tmp%Base;
                up=tmp/Base;
            }
            if(up!=0)res.a[i+(int)b.a.size()]=up;
        }
        while(res.a.back()==0&&res.a.size()>1)res.a.pop_back();
        return res;
    }
    void display(){
        printf("%d",a.back());
        for(int i=(int)a.size()-2;i>=0;i--)printf("%09d",a[i]);
 
    }
}ans;
char str[100005];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%s",str);
        if(i==1)ans=BigInt(str,0,strlen(str)-1);
        else {
            ans=ans*BigInt(str,0,strlen(str)-1);
        }
    }
    ans.display();
    return 0;
}
