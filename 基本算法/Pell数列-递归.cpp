/*����
Pell����a1, a2, a3, ...�Ķ����������ģ�a1 = 1, a2 = 2, ... , an = 2 * an ? 1 + an - 2 (n > 2)��
����һ��������k��Ҫ��Pell���еĵ�k��ģ��32767�Ƕ��١�
����
��1���ǲ������ݵ�����n���������n�����롣ÿ���������ռ1�У�����һ��������k (1 �� k < 1000000)��
���
n�У�ÿ�������Ӧһ�����롣���Ӧ��һ���Ǹ�������*/
#include<cstdio>
int s[1000005]={0,1,2},a[1000005]={0,1,2};
int  fun(int x)
{
    if(x<=2) return x;

            else if(s[x]) return s[x];
else {
                s[x]=(2*fun(x-1)+fun(x-2))%32767;
                return s[x];
            } 
} 


int main()
{
    int  n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
    printf("%d\n",fun(a[i]));
}
