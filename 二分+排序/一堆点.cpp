/*题目描述 
这个问题很简单，有n个三维点(x,y,z)，要求按照它们距离原点的距离来排序，若距离相等，则按照x的顺序
递增，若x也相等，则按照y递增的顺序递增(依次类推，不会输入重复点)

输入描述:
第一行输入一个正整数n（1<=n<=10^5）,表示有n个三维点
随后n行，每行包含3个实数x，y，z表示一个点的坐标。
输出描述:
按照排序之后的结果，每行输出一个三维点的x y z方向的坐标，两个数之间以一个空格分隔*/
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
