/*��Ŀ���� 
�������ܼ򵥣���n����ά��(x,y,z)��Ҫ�������Ǿ���ԭ��ľ�����������������ȣ�����x��˳��
��������xҲ��ȣ�����y������˳�����(�������ƣ����������ظ���)

��������:
��һ������һ��������n��1<=n<=10^5��,��ʾ��n����ά��
���n�У�ÿ�а���3��ʵ��x��y��z��ʾһ��������ꡣ
�������:
��������֮��Ľ����ÿ�����һ����ά���x y z��������꣬������֮����һ���ո�ָ�*/
#include<bits/stdc++.h>
using namespace std;
const long long MAX=1e5+7;
struct node
{
	long long x,y,z;
	long long f;
}a[MAX];
bool cmp(node a,node b)
{
    if(a.f==b.f)
    {
        if(a.x==b.x)
        {
            if(a.y==b.y) return a.z<b.z;
            else return a.y<b.y;
        }
        else return a.x<b.x;
    }
    return a.f<b.f;
}
int main()
{
	long long n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		scanf("%ld%ld%ld",&a[i].x,&a[i].y,&a[i].z);
		a[i].f=a[i].x*a[i].x+a[i].y*a[i].y+a[i].z*a[i].z;
	}
	sort(a,a+n,cmp);
	for(i=0;i<n;i++)
	printf("%ld %ld %ld\n",a[i].x,a[i].y,a[i].z);
	return 0;
} 
