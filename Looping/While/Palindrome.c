#include<stdio.h>
int main()
{
    int n,c,r=0;
    printf("Enter n : ");
    scanf("%d",&n);
    c=n;
    while(n)
    {
        r=r*10+n%10;
        n=n/10;
    }
    if(r==c)
    {
        printf("Palindrome");
    }
    else 
    {
        printf("Not Palindrome");
    }
}