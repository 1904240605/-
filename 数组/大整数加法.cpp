/*����
������������200λ�ķǸ������ĺ͡�

����
�����У�ÿ����һ��������200λ�ķǸ������������ж����ǰ��0��
���
һ�У�����Ӻ�Ľ��������ﲻ���ж����ǰ��0������������342����ô�Ͳ������Ϊ0342��*/
#include <stdio.h>
#include <string.h>
#define MAXN 200+7
char t1[MAXN],t2[MAXN];
int a[MAXN],b[MAXN],ans[MAXN]; 
int main()
{
	int i;scanf("%s%s",t1,t2);
	memset(ans,0,sizeof(ans));
	int len1=strlen(t1),len2=strlen(t2),lenmax=len1>len2?len1:len2;
	for(i=0;i<len1;i++)a[i]=t1[len1-1-i]-'0';
	for(i=0;i<len2;i++)b[i]=t2[len2-1-i]-'0';
	for(i=0;i<lenmax;i++)
	{
		ans[i]+=a[i]+b[i];
		ans[i+1]+=ans[i]/10;
		ans[i]%=10;
	}
	while(lenmax!=0&&ans[lenmax]==0)lenmax--;
	for(i=lenmax;i>=0;i--)printf("%d",ans[i]);
	return 0;
}
