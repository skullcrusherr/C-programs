#include<stdio.h>
union apple{
    int a,b;
    float c,d;
};
int main()
{
    union apple obj;
    printf("Enter 2 int values : \n");
    scanf("%d%d",&obj.a,&obj.b);
    printf("Values are : %d %d\n",obj.a,obj.b);
    printf("Enter 2 float values : \n");
    scanf("%f%f",&obj.c,&obj.d);
    printf("Values are : %f %f\n",obj.c,obj.d);
    return 0;
}