#include<stdio.h>
int main()
{
    int num,i,largest=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            largest=i;
            num=num/i;
        }
    }
    printf("The largest prime factor is: %d", largest);
    return 0;
}