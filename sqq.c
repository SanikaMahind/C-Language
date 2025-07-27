#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    printf("enter two numbers:\n");
    scanf("%d%d",&x,&y);

    double N=(x*x*x)+(2*x*x)+(3*y*y)+y+x;
    if(N<0){
        printf("square root og a negative number.\n");
        return 1;
    }

    N=sqrt(N);
    int D=2*x*x*y*y;

    if(D==0)
    {
        printf("Divisible by zero.\n");
    }


    
     double ans=N/D;
     printf("answer=%lf \n",ans);

    return 0;

}