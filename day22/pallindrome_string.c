#include<stdio.h>
int main(){
    char str[100];
    int i=0,j,ispallindrome=1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    j=0;
    while(str[j]!='\0'){
        j++;
    }   
    j--;
    if(str[j]=='\n'){
        str[j]='\0';
        j--;
    }
    while(i<j){
        if(str[i]!=str[j]){
            ispallindrome=0;
            break;
        }
        i++;
        j--;
    }
    if(ispallindrome){
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}