#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Square numbers up to %d are : \n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i*i);
    }
    return 0;
}