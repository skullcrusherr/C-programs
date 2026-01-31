#include<stdio.h>
int hcf(int a,int b)
{
    int i;
    for(i=(a<b)?a:b;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            return i;
        }
    }
}
int main()
{
    int a,b;
    printf("Enter 2 no : \n");
    scanf("%d%d",&a,&b);
    printf("HCF is : %d\n",hcf(a,b));
    return 0;
}