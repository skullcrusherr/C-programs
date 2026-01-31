#include<stdio.h>
void tables(int n)
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
}
int main()
{
    int n;
    printf("Enter a number : \n");
    scanf("%d",&n);
    tables(n);
    return 0;
}