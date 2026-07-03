#include<stdio.h>
int main(){
    char str[100];
    int i=0,j=0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while(str[i]!='\0'&& str[i]!='\n'){
        if(str[i]!=' '){
            str[j]=str[i];
            j++;
        }
        i++;
    }
    str[j]='\0';
    printf("String after removing spaces: %s\n", str);  
    return 0;
}