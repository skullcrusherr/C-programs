#include<stdio.h>
int main()
{
    int a=0,b=1,c,i,n;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Fibonacci series up to %d terms : \n",n);
    printf("%d\n%d\n",a,b);
    for(i=2;i<n;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
}