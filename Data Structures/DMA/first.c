#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,*q;
    p=(int *)malloc(sizeof(int));
    q=(int *)malloc(sizeof(int));
    printf("Enter 2 no : ");
    scanf("%d%d",p,q);
    printf("Sum is : %d\n",*p+*q);
    printf("Diff is : %d\n",*p-*q);
    printf("Pro is : %d\n",*p**q);
    printf("Quo is : %d\n",*p/ *q);
    printf("Rem is : %d\n",*p% *q);
    free(p);
    free(q);
    return 0;
}