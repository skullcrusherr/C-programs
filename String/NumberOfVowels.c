#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,c=0;
    printf("Enter a string : \n");
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
        {
            c++;
        }
    }
    printf("Number of Vowels : %d\n",c);
    return 0;
}