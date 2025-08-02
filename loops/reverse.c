#include<stdio.h>
int main(){
    int i,n;
    int ans=0;
    printf("enter no");
    scanf("%d",&n);
    for( i=0;n>0;i++)
    {
        int R=n%10;
        ans=(ans*10)+R;
        n=n/10;
    }
    printf("the ans is:%d",ans);
    return 0;
    }

