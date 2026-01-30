#include<stdio.h>
int main()
{
    int a[100][100],i,j,row,col,l,l2;
    printf("Enter number of rows and columns : ");
    scanf("%d%d",&row,&col);
    printf("Enter elements of the array : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    l=a[0][0];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(a[i][j]>l)
            {
                l=a[i][j];
            }
        }
    }
    l2=a[0][0];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(a[i][j]>l2 && a[i][j]<l)
            {
                l2=a[i][j];
            }
        }
    }
    printf("Second Largest in the array is : %d\n",l2);
}