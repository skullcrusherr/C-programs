#include<stdio.h>
int main()
{
    int a[100],n,i,*p;
    p=&a[0];
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter arr ele : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("reverse is : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(p+n-1-i));
    }
    return 0;
}