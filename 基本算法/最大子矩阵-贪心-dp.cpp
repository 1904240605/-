/*����
��֪����Ĵ�С����Ϊ����������Ԫ�صĺ͡�����һ����������������ҵ����ķǿ�(��С������1 * 1)�Ӿ���

���磬����4 * 4�ľ���

0 -2 -7 0
9 2 -6 2
-4 1 -4 1
-1 8 0 -2

������Ӿ�����

9 2
-4 1
-1 8

����Ӿ���Ĵ�С��15��
����
������һ��N * N�ľ�������ĵ�һ�и���N (0 < N <= 100)���ٺ�����������У����Σ����ȴ����Ҹ�����һ�е�N���������ٴ����Ҹ����ڶ��е�N���������������������е�N2������������֮���ɿհ��ַ��ָ����ո���߿��У�����֪�����������ķ�Χ����[-127, 127]��
���
�������Ӿ���Ĵ�С��*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define maxn 105
#define inf 0x3f3f3f3f
int n, ans;
int pre[maxn][maxn], a[maxn][maxn], f[maxn];

int _max(int a, int b){
    return a > b ? a : b;
}
int main()
{
    scanf("%d", &n);
    ans = -inf;
    int i, j, k;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            scanf("%d", &a[i][j]);
            pre[i][j] = pre[i - 1][j] + a[i][j];
        }
    }
    for(i = 1; i <= n; i++){
        for(j = i + 1; j <= n; j++){
            for(k = 1; k <= n; k++){
                f[k] = pre[j][k] - pre[i - 1][k];
            }
            for(k = 1; k <= n; k++){
                f[k] = _max(f[k - 1] + f[k], f[k]);
                ans = _max(ans, f[k]);
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}
