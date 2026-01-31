#include<stdio.h>
struct apple{
    int a,b;
    float c,d;
};
int main()
{
    struct apple obj;
    printf("Enter 2 int and 2 float values : \n");
    scanf("%d%d%f%f",&obj.a,&obj.b,&obj.c,&obj.d);
    printf("Values are : %d %d %f %f\n",obj.a,obj.b,obj.c,obj.d);
    return 0;
}