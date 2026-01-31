#include<stdio.h>
int main()
{
    int a[100],i,n,*p,l;
    p=&a[0];
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter array elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    l=*p;
    for(i=0;i<n;i++)
    {
        if(*(p+i)>l)
        {
            l=*(p+i);
        }
    }
    printf("Largest element is : %d\n",l);
    return 0;
}