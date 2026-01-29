#include<stdio.h>
int main()
{
    int n,i,f=1;
    printf("Enter n : ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    printf("Factorial is : %d",f);
}