#include<stdio.h>
int main()
{
    int a,b,l;
    printf("Enter 2 no : \n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        l=a;
    }
    else
    {
        l=b;
    }
    while(1)
    {
        if(l%a==0 && l%b==0)
        {
            printf("LCM is : %d\n",l);
            break;
        }
        l++;
    }
    return 0;
}