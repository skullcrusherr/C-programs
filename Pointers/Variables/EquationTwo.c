#include<stdio.h>
int main()
{
    int n,a,d,*p,*q,*r;
    p=&n;
    q=&a;
    r=&d;
    printf("Enter n, a and d : \n");
    scanf("%d%d%d",p,q,r);
    printf("Result is : %f\n",*p/2.0*(2**q+(*p -1 )**r));
    return 0;
}