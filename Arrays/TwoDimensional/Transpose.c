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
    printf("Transpose of the array is : \n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}