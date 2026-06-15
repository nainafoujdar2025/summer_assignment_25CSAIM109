#include<stdio.h>
int fibonacci(int n) {
    if (n == 0) {
        return 0; // Base case: Fibonacci of 0 is 0
    } else if (n == 1) {
        return 1; // Base case: Fibonacci of 1 is 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
    }
}
int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Fibonacci is not defined for negative numbers.\n");
    } else {
        printf("Fibonacci of %d is %d\n", number, fibonacci(number));
    }
    
    return 0;
}