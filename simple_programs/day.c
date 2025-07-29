#include<stdio.h>
int main()
{
    int day=0;
    printf("Enter day of week=\n");
    scanf("%d",&day);

    switch(day)
    {
        case 1:
        printf("sunday");
        break;
        case 2:
        printf("monday");
        break;
        case 3:
        printf("tuesday");
        break;
        case 4:
        printf("wednsday");
        break;
        case 5:
        printf("thrusday");
        break;
        case 6:
        printf("friday");
        break;
        case 7:
        printf("saturday");
        break;
       
        default :
        printf("Invalid day of week=\n");
        return 0;
        
    }


}
