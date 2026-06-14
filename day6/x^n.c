#include<stdio.h>
int  main()
{
    int x,n;
    long long result = 1;
    printf("Enter a base number (x): ");
    scanf("%d", &x);
    printf("Enter an exponent (n): ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        result *= x;
    }
    printf("%d raised to the power of %d is: %lld\n", x, n, result);
    return 0;
}