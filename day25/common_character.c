#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int presentInStr1[256] = {0};
    int alreadyPrinted[256] = {0};

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    // Mark characters present in the first string
    for (int i = 0; str1[i] != '\0'; i++) {
        presentInStr1[(unsigned char)str1[i]] = 1;
    }

    printf("Common characters: ");
    // If a character in str2 is marked in presentInStr1, it's common
    for (int i = 0; str2[i] != '\0'; i++) {
        unsigned char ch = str2[i];
        if (presentInStr1[ch] && !alreadyPrinted[ch]) {
            printf("%c ", ch);
            alreadyPrinted[ch] = 1; // Prevent duplicate outputs
        }
    }
    printf("\n");

    return 0;
}