#include<stdio.h>
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int sum = 7;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == sum){
                printf("Pair with given sum %d is (%d, %d)\n", sum, arr[i], arr[j]);
            }
        }
    }
    return 0;
}