#include<stdio.h>
int lcm(int a,int b)
{
    int l=(a>b)?a:b;
    while(1)
    {
        if(l%a==0 && l%b==0)
        {
            return l;
        }
        l++;
    }
}
int main()
{
    int a,b;
    printf("Enter 2 no : \n");
    scanf("%d%d",&a,&b);
    printf("LCM is : %d\n",lcm(a,b));
    return 0;
}