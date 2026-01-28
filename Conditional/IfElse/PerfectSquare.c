#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    b=sqrt(a);
    if(a==b*b)
    {
        printf("a is a perfect square");
    }
    else
    {
        printf("a is not a perfect square");
    }
    return 0;
}