#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i;
    printf("Enter a string : ");
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        b[strlen(a)-1-i]=a[i];
    }
    b[i]='\0';
    if(strcmp(a,b)==0)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not a Palindrome\n");
    }
    return 0;
}