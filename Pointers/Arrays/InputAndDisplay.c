#include<stdio.h>
int main()
{
    int a[100],i,n,*p;
    p=&a[0];
    printf("Enter number of elements : \n");
    scanf("%d",&n);
    printf("Enter arr ele : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("Array elements are : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(p+i));
    }
}