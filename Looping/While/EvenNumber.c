#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter n : ");
    scanf("%d",&n);
    i=2;
    printf("Even Number are : \n");
    while(i<n)
    {
        printf("%d ",i);
        i+=2;
    }
}