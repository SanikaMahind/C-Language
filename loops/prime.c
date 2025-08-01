#include<stdio.h>
int main(){

int flag=0;
int i=1,n;
printf("enetr the value\n");
scanf("%d",&n);

for(i=2;i<n;i++)
{
    if(n%i==0)
    {
        flag=1;
        break;
    }    
}
if(flag==1)
printf("n is composite");
else
printf("n is prime");
return 0;
}
