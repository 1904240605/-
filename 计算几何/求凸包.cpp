#include <iostream>
using namespace std;
#include <algorithm>
#include <stdlib.h>
#define N 10000
int n = 0;
struct POINT
{
    int x, y;
}p[N],ans[N];
int visit[N],mark[N];
int Djudge(POINT a1, POINT a2, POINT a3)
{
    int calculate = a1.x*a2.y + a3.x*a1.y + a2.x*a3.y - a3.x*a2.y - a2.x*a1.y - a1.x*a3.y;
    return calculate;
}
bool cmpxy(const POINT a, const POINT b) //��x������,���x��ͬ,��y������
{
    if (a.x != b.x)
        return a.x < b.x;
    else
        return a.y < b.y;
}
void DealLeft(int first, int last)
{
    int max = 0, index = -1;
    int i = first;
    if (first < last)
    {
        for (i = first+1; i < last; i++) //ע������,����first��last,û��Ҫ�ٽ��м���
        {
            int calcu = Djudge(p[first], p[i], p[last]);
            if (calcu == 0) {  visit[i] = 1; } //
            if (calcu > max)
            {
                max = calcu;
                index = i;
            }
 
        }
    }
    else
    {
        for (i-1; i >last; i--) //���first>last,�ظ���������,ע�������½粻��0.
        {
            int calcu = Djudge(p[first], p[i], p[last]);
            if (calcu == 0) {visit[i] = 1;} //
            if (calcu >  max)
            {
                max = calcu;
                index = i;
            }
        }
    }
    if (index != -1)
    {
        visit[index] = 1; //��ȡ���ĵ���б�ע  
        DealLeft(first, index);
        DealLeft(index, last);//���εĲ���
    }
}
 
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].x >> p[i].y;
        visit[i] = 0;
    }
    visit[0] = 1;
    visit[n - 1] = 1;
    sort(p, p + n, cmpxy);
    DealLeft(0, n - 1); //������͹��;
    DealLeft(n - 1, 0); //������͹��;
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        if (visit[i] == 1)
        {
            ans[t].x = p[i].x;
            ans[t].y = p[i].y;
            t++;
        }
    }
//˳ʱ�����
    mark[0] = mark[t - 1] = 1; //����mark�����ظ���齵��Ч��
    for (int i = 1; i < t - 1; i++)
    {
        mark[i] = 0;
    }
    cout << ans[0].x << " " <<ans[0].y<< endl;
    for (int i =1; i < t-1; i++)
    {
        int d = Djudge(ans[0], ans[t-1], ans[i]);
        if (d >= 0)
        {
            cout << ans[i].x << " " << ans[i].y << endl;
            mark[i] = 1;
        }
    }
    cout << ans[t - 1].x << " " << ans[t - 1].y << endl;
    for (int i = 1; i < t; i++)
    {
        if (mark[i] != 1)
        {
            int d = Djudge(ans[0], ans[t - 1], ans[i]);
            if (d < 0)
            {
                cout << ans[i].x << " " << ans[i].y << endl;
            }
        }
    }
 
    system("pause");
    return 0;
}

