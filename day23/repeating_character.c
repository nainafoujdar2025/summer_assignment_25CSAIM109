#include<stdio.h>
int main(){
    char str[100];
    int visited[256]={0};
    int found=0;
    printf("enter a string:");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0' && str[i]!='\n';i++){
        unsigned char ch = str[i];
        if(visited[ch]==1){
            printf("First repeating character: %c\n", str[i]);
            found=1;
            break;
        }
        visited[ch]=1;
    }
    if(!found){
        printf("No repeating character found.\n");
    }
    return 0;
}