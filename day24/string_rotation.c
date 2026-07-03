#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    // If lengths are not equal, they cannot be rotations
    if (strlen(str1) != strlen(str2)) {
        printf("The second string is NOT a rotation of the first.\n");
        return 0;
    }

    // Concatenate str1 with itself into temp
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL) {
        printf("The second string IS a rotation of the first.\n");
    } else {
        printf("The second string is NOT a rotation of the first.\n");
    }

    return 0;
}