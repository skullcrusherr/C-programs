#include<stdio.h>
int main()
{
    int a,b,*p,*q;
    p=&a;
    q=&b;
    printf("Enter 2 no : \n");
    scanf("%d%d",p,q);
    printf("val of a and b is : %d %d\n",*p,*q);
    return 0;
}