#include<stdio.h>
int main()
{
    int arr[100], n, i, search, count = 0;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to count frequency: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == search)
        {
            count++;
        }
    }

    if(count > 0)
        printf("Element %d occurs %d times in the array.\n", search, count);
    else
        printf("Element %d not found in the array.\n", search);

    return 0;
}