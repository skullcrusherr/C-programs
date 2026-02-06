#include<stdio.h>
#include<stdlib.h>
int *p = NULL;
int *n = NULL;
int *i = NULL;
int *ch = NULL;
void cleanup()
{
    free(p);
    free(n);
    free(i);
    free(ch);
    p = NULL;
    n = NULL;
    i = NULL;
    ch = NULL;
}
void create()
{
    if(n==NULL)
    {
        n=(int *)malloc(sizeof(int));
    }
    if(i==NULL)
    {
        i=(int *)malloc(sizeof(int));
    }
    printf("Enter n : ");
    scanf("%d",n);
    p=(int *)calloc(*n,sizeof(int));
    printf("Enter arr ele : \n");
    for(*i=0;*i<*n;(*i)++)
    {
        scanf("%d",p+*i);
    }
}
void display()
{
    if(p==NULL || n==NULL || i==NULL || *n==0)
    {
        printf("Array is empty\n");
        return;
    }
    printf("Array is : \n");
    for(*i=0;*i<*n;(*i)++)
    {
        printf("%d ",*(p+*i));
    }
    printf("\n");
}
void insert()
{
    if(n==NULL)
    {
        printf("Array not created\n");
        return;
    }
    p=(int *)realloc(p,(*n+1)*sizeof(int));
    printf("Enter new element : "); 
    scanf("%d",p+((*n)++));
}
void delete()
{
    if(n==NULL || *n==0)
    {
        printf("Array is empty\n");
        return;
    }
    printf("Deleted element is : %d\n",*(p+--(*n)));
    p=(int *)realloc(p,*n*sizeof(int));
}
int main()
{
    if(ch==NULL)
    {
        ch=(int*)malloc(sizeof(int));
    }
    while(1)
    {
        printf("Enter choice : \n1.Create\n2.Display\n3.Insert\n4.Delete\n5.Exit\n");
        printf("Enter choice : ");
        scanf("%d",ch);
        switch(*ch)
        {
            case 1 : create();
                     break;
            case 2 : display();
                     break;
            case 3 : insert();
                     break;
            case 4 : delete();
                     break;
            case 5 : cleanup();
                     exit(0);
                     break;
            default : printf("Invalid choice\nTry Again\n");
        }
    }
}
