#include<stdio.h>
int main()
{
    int a[100][100],i,j,row,col;
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
    printf("Even numbers in the array are : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(a[i][j]%2==0)
            {
                printf("%d ",a[i][j]);
            }
        }
    }
    return 0;
}