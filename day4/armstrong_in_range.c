#include<stdio.h>
int armstrong(int n)
{
    int sum=0,temp=n;
    while(temp>0)
    {
        int r=temp%10;
        sum+=r*r*r;
        temp/=10;
    }
    return sum==n;
}
int main()
{
    int a,b,i;
    printf("Enter the range:");
    scanf("%d%d",&a,&b);
    printf("Armstrong numbers between %d and %d are:\n",a,b);
    for(i=a;i<=b;i++)
    {
        if(armstrong(i))
        {
            printf("%d ",i);
        }
    }
    return 0;
}