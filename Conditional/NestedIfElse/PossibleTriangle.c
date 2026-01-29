#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 2 sides of a Triangle : \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>0 && b>0 && c>0)
    {
        if(a+b>c && b+c>a && c+a>b)
        {
            printf("Triangle is Possible");
        }
        else
        {
            printf("Triangle is not Possible");
        }
    }
    else
    {
        printf("Triangle is not Possible");
    }
    return 0;
}