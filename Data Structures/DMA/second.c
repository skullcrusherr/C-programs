#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,*n,*i;
    n=(int *)malloc(sizeof(int));
    i=(int *)malloc(sizeof(int));
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
}