#include<stdio.h>
int main()
{
    int a[100][100],i,j,row,col,s=0;
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
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            s=s+a[i][j];
        }
    }
    printf("Sum is : %d\n",s);
    return 0;
}