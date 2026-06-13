#include<stdio.h>
int main()
{
    int num, sum = 0, temp, remainder, factorial;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        remainder = temp % 10;
        factorial = 1;
        for (int i = 1; i <= remainder; i++)
        {
            factorial *= i;
        }
        sum += factorial;
        temp /= 10;
    }
    if (sum == num)
        printf("%d is a strong number.", num);
    else
        printf("%d is not a strong number.", num);
    return 0;
}