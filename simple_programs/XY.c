#include<stdio.h>
int main()
{
    int x=0,y=0;
    printf("enter two numbers");
    scanf("%d%d",&x,&y);
    printf("x=%d,y=%d",x,y);
    int N=(x*x*x)+(2*x*x)+(3*y*y)+y+x;
    N=sqrt(N);
    int D=2*x*x*y*y;
    double ans=N/D;
    return 0;

}