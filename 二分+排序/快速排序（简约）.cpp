#include<bits/stdc++.h>
using namespace std;
int a[101],n;//定义全局变量，这两个变量需要在子函数中使用
void quicksort(int l, int r) 
{
	int i=l,j=r;
	int mid=(l+r)/2;
	int x=a[mid];
	while(i<=j)
	{
		while(a[i]<x)i++;
		while(a[j]>x)j--;
		if(i<=j)
		{
			swap(a[i],a[j]);
			i++;j--;
		}
	}
	if(l<j)quicksort(l,j);
	if(i<r)quicksort(i,r);
}
int main() {
	int i;
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
		scanf("%d", &a[i]);
    quicksort(1, n);
    for(i = 1; i <=n; i++)
    	printf("%d ", a[i]);
    return 0;
} 
