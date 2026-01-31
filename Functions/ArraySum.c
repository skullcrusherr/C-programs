#include<stdio.h>
int sum(int a[], int n)
{
    int s=0,i;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    return s;
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
    printf("Sum is : %d\n",sum(a,n));
    return 0;
}