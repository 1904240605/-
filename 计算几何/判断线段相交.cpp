#include <iostream>
using namespace std;

struct SPoint
{
    int x;
    int y;
};

struct SLine
{
    SPoint A;
    SPoint B;
};

int multiplicationCross(int x1,int y1,int x2,int y2)
{
    return x1*y2-y1*x2;
}

bool isIntersect(SLine &l1,SLine &l2)
{
    //快速排斥实验
    if (!(min(l1.A.y,l1.B.y)<=max(l2.A.y,l2.B.y)&&max(l1.A.y,l1.B.y)>=min(l2.A.y,l2.B.y)&&min(l1.A.x,l1.B.x)<=max(l2.A.x,l2.B.x)&&max(l1.A.x,l1.B.x)>=min(l2.A.x,l2.B.x)))
        return false;

    //跨立实验
    int u,v,w,z;
    u = multiplicationCross(l1.B.x-l1.A.x,l1.B.y-l1.A.y,l2.A.x-l1.A.x,l2.A.y-l1.A.y);
    v = multiplicationCross(l1.B.x-l1.A.x,l1.B.y-l1.A.y,l2.B.x-l1.A.x,l2.B.y-l1.A.y);
    w = multiplicationCross(l2.B.x-l2.A.x,l2.B.y-l2.A.y,l1.A.x-l2.A.x,l1.A.y-l2.A.y);
    z = multiplicationCross(l2.B.x-l2.A.x,l2.B.y-l2.A.y,l1.B.x-l2.A.x,l1.B.y-l2.A.y);

    return u * v <= 0 && w * z <= 0;
}

int main() {
int t;
    cin>>t;
    while (t--)
    {
        SLine l1,l2;
        cin>>l1.A.x>>l1.A.y>>l1.B.x>>l1.B.y;
        cin>>l2.A.x>>l2.A.y>>l2.B.x>>l2.B.y;
        if(isIntersect(l1,l2))
            cout<<"intersect"<<endl;
        else
            cout<<"disjoint"<<endl;
    }
    return 0;
}
