#include<stdio.h>
int main(){
    int a[50],n,i,search,first,last,middle;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element to search: ");
    scanf("%d",&search);
    first=0;
    last=n-1;
    while(first<=last){
        middle=(first+last)/2;
        if(a[middle]==search){
            printf("element found at position %d",middle+1);
            break;
        }
        else if(a[middle]<search){
            first=middle+1;
        }
        else{
            last=middle-1;
        }
    }
    if(first>last){
        printf("element not found");
    }
    return 0;
}