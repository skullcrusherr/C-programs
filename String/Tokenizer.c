#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i;
    printf("Enter a string : \n");
    gets(a);
    printf("Tokens are : \n");
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c",a[i]);
        }
    }
    return 0;
}