#include<stdio.h>
int main()
{
    int a[100], n, i, j;
    printf("Enter number of elements in array\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Duplicate elements in the array are:\n");
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }
    return 0;
}