#include<stdio.h>
int main()
{
    int n,binaryNum[n], decimalNum = 0, i = 0, j;
    printf("Enter the number of bits: ");
    scanf("%d", &n);
    printf("Enter a binary number: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &binaryNum[i]);
    }
    
    for (j = 0; j < i; j++) {
        decimalNum = decimalNum * 2 + binaryNum[j];
    }
    
    printf("Decimal representation: %d\n", decimalNum);
    
    return 0;
}