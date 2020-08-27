/*描述
已知矩阵的大小定义为矩阵中所有元素的和。给定一个矩阵，你的任务是找到最大的非空(大小至少是1 * 1)子矩阵。

比如，如下4 * 4的矩阵

0 -2 -7 0
9 2 -6 2
-4 1 -4 1
-1 8 0 -2

的最大子矩阵是

9 2
-4 1
-1 8

这个子矩阵的大小是15。
输入
输入是一个N * N的矩阵。输入的第一行给出N (0 < N <= 100)。再后面的若干行中，依次（首先从左到右给出第一行的N个整数，再从左到右给出第二行的N个整数……）给出矩阵中的N2个整数，整数之间由空白字符分隔（空格或者空行）。已知矩阵中整数的范围都在[-127, 127]。
输出
输出最大子矩阵的大小。*/
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
