/*���ڿ�����������£���Ȼ����������һ�ĵġ�
˵���ڣ����뵽�����������ʣ��ʾ����Զ��󣩣����ﶨ�������ǳ��ִ�����������
���ڸ��� 
n������ ai�����μ��뵽���ּ����У�ÿ���һ�����ֶ����������ǰ���ϵ�������
����һ��ʼ�ǿյģ�������ڶ�������������С���Ǹ���*/
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
