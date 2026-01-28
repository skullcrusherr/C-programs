#include<stdio.h>
int main()
{
    int a;
    printf("Enter a : \n");
    scanf("%d",&a);
    if(a>=0)
    {
        printf("a is positive");
    }
    else
    {
        printf("a is negative");
    }
    return 0;
}