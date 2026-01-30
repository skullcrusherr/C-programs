#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100],i,j,k,row1,col1,row2,col2;
    printf("Enter number of rows and columns of first matrix : ");
    scanf("%d%d",&row1,&col1);
    printf("Enter elements of first matrix : \n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter number of rows and columns of second matrix : ");
    scanf("%d%d",&row2,&col2);
    if(col1!=row2)
    {
        printf("Matrix multiplication not possible\n");
        return 0;
    }
    printf("Enter elements of second matrix : \n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            c[i][j]=0;
            for(k=0;k<col1;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("Product of the two matrices is : \n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}