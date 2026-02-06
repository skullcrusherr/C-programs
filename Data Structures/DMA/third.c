#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,*n,*i,*m;
    n=(int *)malloc(sizeof(int));
    i=(int *)malloc(sizeof(int));
    m=(int *)malloc(sizeof(int));
    printf("Enter n : ");
    scanf("%d",n);
    p=(int *)calloc(*n,sizeof(int));
    printf("Enter arr ele : \n");
    for(*i=0;*i<*n;(*i)++)
    {
        scanf("%d",p+*i);
    }
    printf("Entered arr ele are : \n");
    for(*i=0;*i<*n;(*i)++)
    {
        printf("%d ",*(p+*i));
    }
    printf("\nEnter new size : ");
    scanf("%d",m);
    p=(int *)realloc(p,*m*sizeof(int));
    if(*m>*n)
    {
        printf("Enter new arr ele : \n");
        for(*i=*n;*i<*m;(*i)++)
        {
            scanf("%d",p+*i);
        }
        printf("Entered arr ele are : \n");
        for(*i=0;*i<*m;(*i)++)
        {
            printf("%d ",*(p+*i));
        }
    }
    else
    {
        printf("Truncated arr ele are : \n");
        for(*i=0;*i<*m;(*i)++)
        {
            printf("%d ",*(p+*i));
        }
    }
}