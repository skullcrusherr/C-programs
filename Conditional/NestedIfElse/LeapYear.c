#include<stdio.h>
int main()
{
    int y;
    printf("Enter year : ");
    scanf("%d",&y);
    if(y%4==0)
    {
        if(y%100==0)
        {
            if(y%400==0)
            {
                printf("leap");
            }
            else
            {
                printf("not leap");
            }
        }
        else
        {
            printf("leap");
        }
    }
    else
    {
        printf("not leap");
    }
    return 0;
}