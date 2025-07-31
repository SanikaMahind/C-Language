#include<stdio.h>
int main()
{
    int i=0;
    int ans=0;
    for(i=0;i<=100;i++)
    {
        if(i%2==0)
        ans= ans+i;
        
    }
    printf("%d\n",ans);
    return 0;
    
}