//poj_2446
/*==================================================*\
| ����ͼƥ�䣨�������㷨DFS ʵ�֣�
| INIT: g[][]�ڽӾ���;
| �ŵ㣺ʵ�ּ��������⣬�����ڳ���ͼ��DFS������·�졣
| ��һ������·�ĸ��Ӷ�ΪO��E���������V������·����ʱ�临�Ӷ�ΪO��VE��
==================================================*/
#include<stdio.h>
#include<memory.h>
 
#define MAX 1089 //33*33
bool g[MAX][MAX]; //�ڽӾ���true�����б�����
bool flag,visit[MAX];    //��¼V2�е�ĳ�����Ƿ�������
int match[MAX];   //��¼��V2�еĵ�ƥ��ĵ�ı��
int cnt;   //����ͼ����ߡ��ұ߼����ж������Ŀ
bool hole[MAX][MAX];
int id[MAX][MAX];
 
// �������㷨
bool dfs(int u)
{
	for (int i = 1; i <= cnt; ++i)
	{
		if (g[u][i] && !visit[i])   //����ڵ�i��u���ڲ���δ�����ҹ�
		{
			visit[i] = true;   //���iΪ�Ѳ��ҹ�
			if (match[i] == -1 || dfs(match[i]))   //���iδ��ǰһ��ƥ��M�У�����i��ƥ��M�У����Ǵ���i���ڵĽڵ��������������·��
			{
				match[i] = u;  //��¼���ҳɹ���¼������ƥ��M������ȡ������
				return true;   //���ز��ҳɹ�
			}
		}
	}
	return false;
}
int MaxMatch()
{
	int i,sum=0;
	memset(match,-1,sizeof(match));
	for(i = 1 ; i <= cnt ; ++i)
	{
		memset(visit,false,sizeof(visit));   //����ϴ�����ʱ�ı��
		if( dfs(i) )    //�ӽڵ�i������չ
		{
			sum++;
		}
	}
	return sum;
}
 
int main(void)
{
    int i,j,k,m,n,ans,y,x;
    while (scanf("%d %d %d",&m,&n,&k)!=EOF)
    {
		  memset(g,false,sizeof(g));
		  memset(hole,false,sizeof(hole));
          for (i = 1; i <= k; ++i)
		  {
			  scanf("%d %d",&y,&x);
              hole[x][y] = true;
		  }
		  if((m*n-k)&1)   //��ż��֦
		  {
			  puts("NO");
			  continue;
		  }
          cnt = 0;
 
          for (i = 1; i <= m; ++i)
          {
			  for (j = 1; j <= n; ++j)
			  {
				  if(hole[i][j] == false)   //��û��Ϳ�ڵĵ���б��
				  {
					  id[i][j] = ++cnt;
				  }
			  }
          }
		  for (i = 1; i <= m; ++i)
          {
			  for (j = 1; j <= n; ++j)
			  {
				  if(hole[i][j] == false)
				  {
					  if(i-1>0 && hole[i-1][j] == false)   //��ͼ����Ҫע��߽�����
						  g[ id[i][j] ][ id[i-1][j] ] = true;
					  if(i+1<=m && hole[i+1][j] == false)
						  g[ id[i][j] ][ id[i+1][j] ] = true;
					  if(j-1>0 && hole[i][j-1] == false)
						  g[ id[i][j] ][ id[i][j-1] ] = true;
					  if(j+1<=n && hole[i][j+1] == false)
						  g[ id[i][j] ][ id[i][j+1] ] = true;
				  }
			  }
		  }
 
		  ans = MaxMatch();
		  if (ans == cnt)
			  puts("YES");
		  else
			  puts("NO");
	}
    
    return 0;
}
