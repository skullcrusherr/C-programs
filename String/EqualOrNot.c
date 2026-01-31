#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    printf("Enter 2 Strings : \n");
    gets(a);
    gets(b);
    if(strcmp(a,b)==0)
    {
        printf("Strings are Equal\n");
    }
    else
    {
        printf("Strings are Not Equal\n");
    }
    return 0;
}