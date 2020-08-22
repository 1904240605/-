/*假设Alice选择了整数a，Bob选择了整数b。  
Alice使得a做如下变换:  
a -> 2 * a * (a+1)^2
Bob使得b做如下变换:  
b -> b^2
如果变换后的数字相等，则两个人可以化敌为友。  
如果不相等，这两个人怕是石乐志。
现在，你想把Bob部分可能的整数b（存在a变换后的数字等于b变换后的数字）从小到大排列后，知
道第一个大于等于n的数字是多少。

输入描述:
第一行输入一个整数T，表示数据组数。
每组数据输入一个整数n。1 <= T <= 100000   0 <= n <= 10^19
保证结果存在
输出描述:
输出一个整数。*/
/*思路：因为b^2=2*a*(a+1)^2<=1e19，所以a<=3e6，可以枚举i=sqrt(2*a)，那么a=i*i/2，b=(a+1)*i，
然后把答案放入数组，输出的时候二分下就行了。注意：数据较大，用unsigned long long。*/
#include<bits/stdc++.h>
using namespace std;
vector<unsigned long long>ans;
int main()
{
    for(unsigned long long i=0;;i+=2)
    {
        unsigned long long x=i*i/2;
        ans.push_back((x+1)*i);
        if(x*(i+1)>1e19)break;
    }
    int T;cin>>T;
    while(T--)
    {
        unsigned long long n;
        cin>>n;
        int x=lower_bound(ans.begin(),ans.end(),n)-ans.begin();
        cout<<ans[x]<<endl;
    }
    return 0;
}
