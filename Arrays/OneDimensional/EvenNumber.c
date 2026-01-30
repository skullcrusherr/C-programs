#include<stdio.h>
int main()
{
    int a[100],n,i;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter %d elements : \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Even numbers in the array are : \n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}