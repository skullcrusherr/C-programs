#include<stdio.h>
int main()
{
    int n,a,d;
    printf("Enter n, a, and d : ");
    scanf("%d%d%d",&n,&a,&d);
    printf("Result is : %d\n",n/2*(2*a+(n-1)*d));
    return 0;
}