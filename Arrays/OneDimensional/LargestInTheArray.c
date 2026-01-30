#include<stdio.h>
int main()
{
    int a[100],i,n,l;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter arr ele : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>l)
        {
            l=a[i];
        }
    }
    printf("Largest in the array is : %d\n",l);
}