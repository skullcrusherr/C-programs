#include<stdio.h>
int main()
{
    char a;
    printf("Enter a char : ");
    scanf("%c",&a);
    if(a>='A'&&a<='Z')
    {
        printf("Uppercase");
    }
    else if(a>='a'&&a<='z')
    {
        printf("Lowercase");
    }
    else if(a>='0'&&a<='9')
    {
        printf("Digits");
    }
    else
    {
        printf("Symbols");
    }
    return 0;
}