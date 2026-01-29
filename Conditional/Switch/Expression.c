#include<stdio.h>
int main()
{
    int a,b;
    char c;
    printf("Enter the expression : ");
    scanf("%d%c%d",&a,&c,&b);
    switch(c)
    {
        case '+':
            printf("Sum is : %d\n",a+b);
            break;
        case '-':
            printf("Diff is : %d\n",a-b);
            break;
        case '*':
            printf("Pro is : %d\n",a*b);
            break;
        case '/':
            printf("Quo is : %d\n",a/b);
            break;
        case '%':
            printf("Rem is : %d\n",a%b);
            break;
        default:
            printf("Invalid Input");
    }
    return 0;
}