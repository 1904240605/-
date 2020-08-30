/*对于抗击疫情这件事，显然我们是万众一心的。
说到众，就想到了众数（别问，问就是脑洞大），这里定义众数是出现次数最多的数。
现在给你 
n个数字 ai，依次加入到数字集合中，每添加一个数字都请你求出当前集合的众数。
集合一开始是空的，如果存在多个众数，输出最小的那个。*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	map<int, int>ans;
	int max = 0;
	for (int i = 0; i < n; i++) {
		int numin;
		cin >> numin;
		ans[numin]++;
		
		max = ans[numin] > max ? ans[numin] : max;
		
		for (auto it : ans)
		{
			if (it.second == max)
			{
				cout << it.first << endl;
				break;
			}
		}
	}
	return 0;
}
