#include<stdio.h>
int main()
{
    int x,*p;
    p=&x;
    printf("Enter x : ");
    scanf("%d",p);
    printf("Result is : %d\n",3**p**p+5**p+2);
    return 0;
}