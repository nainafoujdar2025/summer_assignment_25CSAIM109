#include<stdio.h>
int main()
{
    int a[10][10],i,j,n;
    printf("Enter the order of the matrix: ");
    scanf("%d",&n);
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                printf("The matrix is not symmetric.\n");
                return 0;
            }
        }
    }
    printf("The matrix is symmetric.\n");
    return 0;
}