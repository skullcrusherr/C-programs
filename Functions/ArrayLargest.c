#include<stdio.h>
int largest(int a[], int n)
{
    int l=a[0],i;
    for(i=0;i<n;i++)
    {
        if(a[i]>l)
        {
            l=a[i];
        }
    }
    return l;
}
int main()
{
    int a[100],i,n;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter arr ele : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Largest element is : %d\n",largest(a,n));
    return 0;
}