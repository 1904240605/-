/*
描述
在线性代数、计算几何中，向量点积是一种十分重要的运算。

给定两个n维向量a=(a1,a2,...,an)和b=(b1,b2,...,bn)，求点积a·b=a1b1+a2b2+...+anbn。

输入
第一行是一个整数n。1 <= n <= 1000。
第二行包含n个整数a1,a2,...,an。
第三行包含n个整数b1,b2,...,bn。
相邻整数之间用单个空格隔开。每个整数的绝对值都不超过1000。
输出
一个整数，即两个向量的点积结果。
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, a[1000], b[1000], x=0, i;
    cin >> n;
    for (i=0; i<n; i++){
        cin >> a[i];
    }
    for (i=0; i<n; i++){
        cin >> b[i];
    }
    for (i=0; i<n; i++){
        x += a[i]*b[i];
    }
    cout << x << endl;
    return 0;
}
