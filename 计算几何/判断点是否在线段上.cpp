#include <stdio.h>

typedef struct point
{
    double x;  //x坐标
    double y;  //y坐标

}point;  //定义点


//判断点是否在线上，在返回1，不在返回0
int onSegement(point p1,point p2,point Q)
{
    double maxx,minx,maxy,miny;

    maxx = p1.x >p2.x ?p1.x :p2.x ;    //矩形的右边长
    minx = p1.x >p2.x ?p2.x :p1.x ;     //矩形的左边长
    maxy = p1.y >p2.y ?p1.y :p2.y ;    //矩形的上边长
    miny = p1.y >p2.y ?p2.y :p1.y ;     //矩形的下边长

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
