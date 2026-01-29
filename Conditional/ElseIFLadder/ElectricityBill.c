#include<stdio.h>
int main()
{
    int u;
    float a=0;
    printf("Enter units used : ");
    scanf("%d",&u);
    if(u>=0 && u<=50)
    {
        a=u*0.50;
    }
    else if(u>=50 && u<=150)
    {
        a=u*0.75;
    }
    else if(u>=150 && u<=250)
    {
        a=u*1.20;
    }
    else if(u>=250)
    {
        a=u*1.5;
    }
    a=a+(a*0.2);
    printf("Bill Amount is : %0.2f\n",a);
}
/*
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
*/