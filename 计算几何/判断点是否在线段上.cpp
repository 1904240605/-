#include <stdio.h>

typedef struct point
{
    double x;  //x����
    double y;  //y����

}point;  //�����


//�жϵ��Ƿ������ϣ��ڷ���1�����ڷ���0
int onSegement(point p1,point p2,point Q)
{
    double maxx,minx,maxy,miny;

    maxx = p1.x >p2.x ?p1.x :p2.x ;    //���ε��ұ߳�
    minx = p1.x >p2.x ?p2.x :p1.x ;     //���ε���߳�
    maxy = p1.y >p2.y ?p1.y :p2.y ;    //���ε��ϱ߳�
    miny = p1.y >p2.y ?p2.y :p1.y ;     //���ε��±߳�

    if( ((Q.x -p1.x )*(p2.y -p1.y) == (p2.x -p1.x) *(Q.y -p1.y)) && ( Q.x >= minx && Q.x <= maxx ) && ( Q.y >= miny && Q.y <= maxy))
        return 1;
    else
        return 0;
}
int main()
{
    point P1,P2,Q;

    printf("input the start point  of the line:");
    scanf("%f%f",&P1.x ,&P1.y);
    printf("\n");

    printf("input the end point of the line:");
    scanf("%f%f",&P2.x ,&P2.y );
    printf("\n");

    printf("input the point :");
    scanf("%f%f",&Q.x ,&Q.y );
    printf("\n");

    if( onSegement(P1,P2,Q) )
    {
        printf("point on the line\n");
    }
    else
    {
        printf("point not on the line\n");
    }

}
