#include <stdio.h>


int main() {
    char str[100];
    int i, j, len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = 0;
    for (i = 0; str[i] != '\0'; i++) {
        len++;
    }

    printf("Original string: %s\n", str);

    // Reverse the string
    for (i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}