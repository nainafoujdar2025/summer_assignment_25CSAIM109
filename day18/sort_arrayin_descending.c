#include<stdio.h>
int main(){
    int a[50],i,j,n,temp;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("sorted array in descending order: ");
    for(i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}