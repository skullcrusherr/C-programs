#include<stdio.h>
int main()
{
    char a;
    printf("Enter a char : ");
    scanf("%c",&a);
    if((a>='a' && a<='z')||(a>='A' && a<='Z'))
    {
        printf("a is an alphabet");
    }
    else
    {
        printf("a is not an alphabet");
    }
    return 0;
}