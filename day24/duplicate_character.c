#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int seen[256] = {0}; // Lookup table initialized to 0
    int j = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        
        // If the character hasn't been processed yet
        if (seen[ch] == 0) {
            seen[ch] = 1;     // Mark it as processed
            str[j] = str[i];  // Move it to the compact position
            j++;
        }
    }
    str[j] = '\0'; // Null-terminate the updated string

    printf("String after removing duplicates: %s\n", str);

    return 0;
}