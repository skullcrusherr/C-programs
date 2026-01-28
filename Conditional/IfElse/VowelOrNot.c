#include<stdio.h>
#include<ctype.h>
int main()
{
    char a;
    printf("Enter a char : ");
    scanf("%c",&a);
    a=(char)tolower((unsigned char)a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    {
        printf("a is a vowel");
    }
    else
    {
        printf("a is a consonant");
    }
}
