#include<stdio.h>
int main(){
    int arr[] = {1, 2, 3, 4, 4, 4, 5};
    int n = 7;
    int max_freq = 0, max_element = 0;
    for(int i = 0; i < n; i++){
        int freq = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                freq++;
            }
        }
        if(freq > max_freq){
            max_freq = freq;
            max_element = arr[i];
        }
    }
    printf("element with maximum frequency = %d", max_element);
    return 0;
}