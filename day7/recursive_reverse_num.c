#include<stdio.h>
#include<math.h>
int reverse_number(int n) {
    if (n == 0) {
        return 0; // Base case: reverse of 0 is 0
    } else {
        int last_digit = n % 10; // Get the last digit
        int remaining_number = n / 10; // Get the remaining number
        return last_digit * pow(10, (int)log10(remaining_number) + 1) + reverse_number(remaining_number); // Recursive case
    }
}
int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Reverse of a negative number is not defined.\n");
    } else {
        printf("Reverse of %d is %d\n", number, reverse_number(number));
    }

    return 0;
}