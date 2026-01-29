#include<stdio.h>
int main()
{
    int amt,n500=0,n200=0,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
    printf("Enter Amount : ");
    scanf("%d",&amt);
    if(amt>=500)
    {
        n500=amt/500;
        amt=amt-n500*500;
    }
    if(amt>=200)
    {
        n200=amt/200;
        amt=amt-n200*200;
    }
    if(amt>=100)
    {
        n100=amt/100;
        amt=amt-n100*100;
    }
    if(amt>=50)
    {
        n50=amt/50;
        amt=amt-n50*50;
    }
    if(amt>=20)
    {
        n20=amt/20;
        amt=amt-n20*20;
    }
    if(amt>=10)
    {
        n10=amt/10;
        amt=amt-n10*10;
    }
    if(amt>=5)
    {
        n5=amt/5;
        amt=amt-n5*5;
    }
    if(amt>=2)
    {
        n2=amt/2;
        amt=amt-n2*2;
    }
    if(amt>=1)
    {
        n1=amt;
    }
    printf("500 Notes : %d\n",n500);
    printf("200 Notes : %d\n",n200);
    printf("100 Notes : %d\n",n100);
    printf("50 Notes : %d\n",n50);
    printf("20 Notes : %d\n",n20);
    printf("10 Notes : %d\n",n10);
    printf("5 Coin : %d\n",n5);
    printf("2 Coin : %d\n",n2);
    printf("1 Coin : %d\n",n1);
    return 0;
}