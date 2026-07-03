#include<stdio.h>
int main(){
    char str[100],temp;
    int i=0,j=0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Find the length of the string
    while(str[j] != '\0'){
        j++;
    }
    j--; // Move to the last character
    // Reverse the string
    while(i < j){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("Reversed string is: %s", str);
    return 0;
}