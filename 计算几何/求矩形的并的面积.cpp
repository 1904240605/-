#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> v;
void tu(int x1,int y1,int x2,int y2)
{
    for(int i=x1+1;i<=x2;i++)
    {
        for(int j=y1+1;j<=y2;j++)
        {
            vector<int> temp;
            temp.push_back(i);
            temp.push_back(j);
            //��������v��ֻҪ���еĶ�������ǰ����һ�����ǾͿ���д��ȥ������Ļ�����ͿĨ 
            bool s=false;
            for(int k=0;k<v.size();k++)
            {
                if(v[k]==temp)
                {
                    s=true;
                }
            }
            if(!s)
            {
                v.push_back(temp);
            }
            temp.clear();
        }
    }
 } 

int main()
{
    //�������о��ε�����������ཻ��ȥ���������������
    //�����ཻ�Ļ����̫�࣬����ס���ã����뵽��ͿĨ������һ������һ������ͿĨ�����ֻҪ����ͿĨ�Ĵ�С���ɡ�
    int n;
    while(cin>>n)
    {
        if(n<0 || n>100)
        {
            cout<<"���������룺"<<endl;
        }
        else
        break;
    }
    for(int i=0;i<n;i++)
    {
        int x1,y1,x2,y2;
        while(cin>>x1>>y1>>x2>>y2)
        {
            if(x1<0 || x1>100 || y1<0 || y1>100 ||x2<0 || x2>100 || y2<0 || y2>100)
            {
                cout<<"���������룺"<<endl;
            }
            else
            break;
        }
        tu(x1,y1,x2,y2);
     } 
     cout<<v.size()<<endl;
    return 0; 
}
