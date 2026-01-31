#include<stdio.h>
int main()
{
    int a[100],i,n,*p,s=0;
    p=&a[0];
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter arr ele : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        s=s+*(p+i);
    }
    printf("Sum is : %d\n",s);
    return 0;
}