/*����Aliceѡ��������a��Bobѡ��������b��  
Aliceʹ��a�����±任:  
a -> 2 * a * (a+1)^2
Bobʹ��b�����±任:  
b -> b^2
����任���������ȣ��������˿��Ի���Ϊ�ѡ�  
�������ȣ�������������ʯ��־��
���ڣ������Bob���ֿ��ܵ�����b������a�任������ֵ���b�任������֣���С�������к�֪
����һ�����ڵ���n�������Ƕ��١�

��������:
��һ������һ������T����ʾ����������
ÿ����������һ������n��1 <= T <= 100000   0 <= n <= 10^19
��֤�������
�������:
���һ��������*/
/*˼·����Ϊb^2=2*a*(a+1)^2<=1e19������a<=3e6������ö��i=sqrt(2*a)����ôa=i*i/2��b=(a+1)*i��
Ȼ��Ѵ𰸷������飬�����ʱ������¾����ˡ�ע�⣺���ݽϴ���unsigned long long��*/
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
