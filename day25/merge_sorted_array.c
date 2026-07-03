#include <stdio.h>

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8, 10};
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = n1 + n2;
    int arr3[n3];

    int i = 0, j = 0, k = 0;

    // Traverse both arrays and copy the smaller element
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    // Store remaining elements of first array
    while (i < n1) {
        arr3[k++] = arr1[i++];
    }

    // Store remaining elements of second array
    while (j < n2) {
        arr3[k++] = arr2[j++];
    }

    printf("Merged sorted array: ");
    for (i = 0; i < n3; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}