#include<stdio.h>
int fact(int n)
{
    return (n==0 || n==1) ? 1 : n*fact(n-1);
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Factorial is : %d\n",fact(n));
    return 0;
}