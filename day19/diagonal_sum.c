#include<stdio.h>
int main()
{
    int n, i, j, sum = 0;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for(i = 0; i < n; i++)
    {
        sum += matrix[i][i]; // Sum of primary diagonal
        sum += matrix[i][n - 1 - i]; // Sum of secondary diagonal
    }
    
    if(n % 2 == 1) // If n is odd, subtract the middle element once
    {
        sum -= matrix[n / 2][n / 2];
    }
    
    printf("The sum of the diagonals is: %d\n", sum);
    
    return 0;
}