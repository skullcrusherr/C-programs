#include<stdio.h>
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int prod(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    if(b != 0)
        return a / b;
    else
    {
        printf("Error: Division by zero\n");
        return 0;
    }
}
int main()
{
    int a,b;
    printf("Enter 2 no : \n");
    scanf("%d%d",&a,&b);
    printf("Addition : %d\n",add(a,b));
    printf("Subtraction : %d\n",sub(a,b));
    printf("Product : %d\n",prod(a,b));
    printf("Division : %d\n",divide(a,b));
    return 0;   
}