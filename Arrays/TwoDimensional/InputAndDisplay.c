#include<stdio.h>
int main()
{
    int a[100][100],row,col,i,j;
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
    printf("The elements are : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}