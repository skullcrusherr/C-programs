#include<stdio.h>
int main()
{
    int a,s=0,temp,d=0,p,i;
    printf("Enter a : ");
    scanf("%d",&a);
    temp=a;
    while(a)
    {
        d++;
        a/=10;
    }
    a=temp;
    while(a)
    {
        p=1;
        for(i=0;i<d;i++)
        {
            p=p*(a%10);
        }
        s=s+p;
        a/=10;
    }
    if(s==temp)
    {
        printf("%d is an Armstrong number\n",temp);
    }
    else
    {
        printf("%d is not an Armstrong number\n",temp);
    }
    return 0;
}