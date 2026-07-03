#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[50], current[50];
    int i = 0, j = 0, max_len = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';

    while (1) {
        // If current character is a space or end of string, a word has ended
        if (str[i] == ' ' || str[i] == '\0') {
            current[j] = '\0'; // Terminate current word string
            
            if (j > max_len) {
                max_len = j;
                strcpy(longest, current);
            }
            
            j = 0; // Reset index for the next word
            
            if (str[i] == '\0') {
                break;
            }
        } else {
            current[j] = str[i];
            j++;
        }
        i++;
    }

    printf("The longest word is: \"%s\" (Length: %d)\n", longest, max_len);

    return 0;
}