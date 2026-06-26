#include<stdio.h>
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
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    float average = (float)sum / n;
    printf("Sum of the array elements is: %d\n", sum);
    printf("Average of the array elements is: %.2f\n", average);
    return 0;
}