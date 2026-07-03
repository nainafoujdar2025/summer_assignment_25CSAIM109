#include<stdio.h>
int main(){
    char str[100];
    int freq[256]={0};
    int found=0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(int i=0;str[i]!='\0' && str[i]!='\n';i++){
        freq[(unsigned char)str[i]]++;
    }
    for(int i=0;str[i]!='\0' && str[i]!='\n';i++){
        if(freq[(unsigned char)str[i]]==1){
            printf("First non-repeating character: %c\n", str[i]);
            found=1;
            break;
        }
    }
    if(!found){
        printf("No non-repeating character found.\n");
    }
    return 0;
}