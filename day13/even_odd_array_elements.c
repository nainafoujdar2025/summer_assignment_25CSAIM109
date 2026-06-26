#include<stdio.h>
void count_even_odd(int arr[], int n, int *even_count, int *odd_count)
{
    *even_count = 0;
    *odd_count = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] % 2 == 0)
            (*even_count)++;
        else
            (*odd_count)++;
    }
}
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int even_count, odd_count;
    count_even_odd(arr, n, &even_count, &odd_count);
    printf("Number of even elements: %d\n", even_count);
    printf("Number of odd elements: %d\n", odd_count);
    return 0;
}