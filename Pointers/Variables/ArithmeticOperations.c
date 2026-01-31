#include<stdio.h>
int main()
{
    int a,b,*p,*q;
    p=&a;
    q=&b;
    printf("Enter 2 no : \n");
    scanf("%d%d",p,q);
    printf("Sum is : %d\n",*p + *q);
    printf("Difference is : %d\n",*p - *q);
    printf("Product is : %d\n",*p * *q);
    printf("Quotient is : %d\n",*p / *q);
    printf("Remainder is : %d\n",*p % *q);
    return 0;
}