#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter 2 no : \n");
    scanf("%d%d",&a,&b);
    for(i=(a<b?a:b);i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            printf("HCF is : %d\n",i);
            break;
        }
    }
    return 0;
}