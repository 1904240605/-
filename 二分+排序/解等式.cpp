/*���ڷ��� 2018 * x ^ 4 + 21 * x + 5 * x ^ 3 + 5 * x ^ 2 + 14 = Y��
������Y��ֵ�������ҳ�������0~100֮��Ľ���*/
//����0~100 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
    scanf("%d",&n);
    while(n--)
    {
        double r=100,l=0,m,y;
        scanf("%lf",&y);
        for(int i=0;i<30;i++)
        {
            m=(r+l)/2;
            if(2018*m*m*m*m+21*m+5*m*m*m+5*m*m+14<y)
            l=m;
            else r=m;
        }
        if(l==0||r==100)
        printf("-1\n");
        else printf("%.4f\n",m);
    }
	return 0;
}
