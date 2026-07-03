#include<stdio.h>
int main(){
    char str[200];
    int words=0, i=0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while(str[i]!='\0'&& str[i]!='\n'){
        if(str[i]!= ' ' && (str[i+1]==' ' || str[i+1]=='\0' || str[i+1]=='\n')){
            words++;
        }
        i++;
    }
    printf("Number of words: %d\n", words);
    return 0;
}