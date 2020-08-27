/*描述
John最近买了一个书架用来存放奶牛养殖书籍，但书架很快被存满了，只剩最顶层有空余。
John共有N头奶牛(1 ≤ N ≤ 20,000)，每头奶牛有自己的高度Hi(1 ≤ Hi ≤ 10,000)，N头奶牛的
总高度为S。书架高度为B(1 ≤ B ≤ S < 2,000,000,007).
为了到达书架顶层，奶牛可以踩着其他奶牛的背，像叠罗汉一样，直到他们的总高度不低于书架高度。
当然若奶牛越多则危险性越大。为了帮助John到达书架顶层，找出使用奶牛数目最少的解决方案吧。
输入
第1行：空格隔开的整数N和B
第2~N+1行：第i+1行为整数Hi
输出
能达到书架高度所使用奶牛的最少数目*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,b,high[20001],sum=0,i;
	cin>>n>>b;
	for(i=0;i<n;i++)
		cin>>high[i];
	sort(high,high+n);
	for(i=n-1;i>=0;i--)
	{
		sum++;
		b-=high[i];
		if(b<=0)
		{
			cout<<sum;
			break;
		}
	}
	return 0;
}
