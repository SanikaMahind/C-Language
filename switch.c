#include<stdio.h>
int main()
{
    char op;
    int a,b;
 
    printf("Enter operation\n");
    scanf("%c",&op);
    printf("Enter two numbers=");
    scanf("%d%d",&a,&b);

   double ans;

    switch(op)
    {
        case'+':
        ans=a+b;
        break;
        case'-':
        ans=a-b;
        break;
        case'*':
        ans=a*b;
        break;
        case'/':
        ans=b!=0? a/b:0;
        break;
        default:
        printf("Invalid operation %c",op);
    }
        printf("ans=%lf",ans);
        return 0;
  
}
