#include<stdio.h>
int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Factorial is : %d\n",fact(n));
    return 0;
}