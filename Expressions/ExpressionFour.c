#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter a, b, and c : ");
    scanf("%d%d%d",&a,&b,&c);
    printf("Root 1 is : %f\n",(-b+sqrt(b*b-4*a*c))/(2.0*a));
    printf("Root 2 is : %f\n",(-b-sqrt(b*b-4*a*c))/(2.0*a));
}