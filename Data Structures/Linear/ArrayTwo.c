#include<stdio.h>
#include<stdlib.h>
int *p = NULL;
int *n = NULL;
int *i = NULL;
void cleanup()
{
    free(p);
    free(n);
    free(i);
    p = NULL;
    n = NULL;
    i = NULL;
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
    printf("Array is : \n");
    for(*i=0;*i<*n;(*i)++)
    {
        printf("%d ",*(p+*i));
    }
}
void insert()
{
        if(n==NULL)
        {
            printf("Array not created\n");
            return;
        }
        p=(int *)realloc(p,(*n+1)*sizeof(int));
        for(*i=*n;*i>=0;(*i)--)
        {
            *(p+*i)=*(p+*i-1);
        }
        printf("Enter new element : "); 
        scanf("%d",p);
        (*n)++;
}
void delete()
{
    if(n==NULL || *n==0)
    {
        printf("Array is empty\n");
        return;
    }
    for(*i=0;*i<*n-1;(*i)++)
    {
        *(p+*i)=*(p+*i+1);
    }
    p=(int *)realloc(p,(*n-1)*sizeof(int));
    (*n)--;
}
int main()
{
    int *ch=(int *)malloc(sizeof(int));
    while(1)
    {
        printf("\nEnter from Options below : \n1. Create\n2. Display\n3. Insert\n4. Delete\n5. Exit\n");
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
                     free(ch);
                     ch = NULL;
                     exit(0);
            default : printf("Invalid choice\n");
        }
    }
}