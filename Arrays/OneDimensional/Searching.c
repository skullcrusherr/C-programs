#include<stdio.h>
int main()
{
    int a[100],n,i,key;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter arr ele : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter key to search : ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("Found");
            return 0;
        }
    }
    printf("Not Found");
    return 0;
}