#include<stdio.h>
int main() {
    int arr[] = {1, 2, 3, 5};
    int n = 5;
    int sum = 0, total;
    for(int i = 0; i < n-1 ; i++){
        sum +=arr[i];
    }
    total = n*(n+1) / 2;
    printf("missing number = %d", total - sum);
    return 0;
}