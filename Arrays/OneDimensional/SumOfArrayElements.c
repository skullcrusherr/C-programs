#include<stdio.h>
int main()
{
    int a[100],n,i,s=0;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter Array Elememnts : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    printf("Sum is : %d\n",s);
}