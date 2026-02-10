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
        scanf("%d",p+(*i));
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
    int *pos=NULL;
    if(pos==NULL)
    {
        pos=(int *)malloc(sizeof(int));
    }
    if(n==NULL)
    {
        printf("Array not created\n");
        return;
    }
    printf("Enter position to insert : ");
    scanf("%d",pos);
    if(*pos<0 || *pos>*n)
    {
        printf("Invalid position\n");
        free(pos);
        pos = NULL;
        return;
    }
    p=(int *)realloc(p,(*n+1)*sizeof(int));
    for(*i=*n;*i>*pos;(*i)--)
    {
        *(p+*i)=*(p+*i-1);
    }
    printf("Enter new element : "); 
    scanf("%d",p+(*pos));
    (*n)++;
}
void delete()
{
    int *pos=NULL;
    if(pos==NULL)
    {
        pos=(int *)malloc(sizeof(int));
    }
    if(n==NULL || *n==0)
    {
        printf("Array is empty\n");
        free(pos);
        pos = NULL;
        return;
    }
    printf("Enter position to delete : ");
    scanf("%d",pos);
    if(*pos<0 || *pos>=*n)
    {
        printf("Invalid position\n");
        free(pos);
        pos = NULL;
        return;
    }
    for(*i=*pos;*i<*n-1;(*i)++)
    {
        *(p+*i)=*(p+*i+1);
    }
    p=(int *)realloc(p,(*n-1)*sizeof(int));
    (*n)--;
}
int main()
{
    int *ch;
    if(ch==NULL)
    {
        ch=(int *)malloc(sizeof(int));
    }
    while(1)
    {
        printf("1.Create\n2.Display\n3.Insert\n4.Delete\n5.Exit\nEnter choice : ");
        scanf("%d",ch);
        switch(*ch)
        {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                insert();
                break;
            case 4:
                delete();
                break;
            case 5:
                cleanup();
                free(ch);
                ch = NULL;
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
}