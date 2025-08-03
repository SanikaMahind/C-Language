#include<stdio.h>
int main(){
    int i,n;
    int ans=0;
    
    printf("enter a number\n");
    scanf("%d",&n);
    int n1=n;
    
    for(i=0;n>0;i++)
    {
        int R=n%10;
        ans=(ans*10)+R;
        n=n/10;
    }
    printf("ans=%d",ans);

    if(n1 ==ans)
    printf("n is palindrom");
    else
    printf("n1 is not palindrom");

    return 0;
    }
    

