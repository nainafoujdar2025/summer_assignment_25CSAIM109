#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    printf("Enter a string to compress: ");
    scanf("%s", str);

    int len = strlen(str);
    printf("Compressed string: ");

    for (int i = 0; i < len; i++) {
        int count = 1;
        
        // Count consecutive occurrences of the current character
        while (i < len - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        
        // Print character and its count
        printf("%c%d", str[i], count);
    }
    printf("\n");

    return 0;
}