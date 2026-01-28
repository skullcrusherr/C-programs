#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 no : \n");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("a is equal to b");
    }
    else
    {
        printf("a is not equal to b");
    }
    return 0;
}