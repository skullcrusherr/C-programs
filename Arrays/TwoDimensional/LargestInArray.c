#include<stdio.h>
int main()
{
    int a[100][100],i,j,row,col,l;
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
    printf("Largest in the array is : %d\n",l);
    return 0;
}