#include <stdio.h>
#include <string.h>

// Function to calculate string length
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[] = "Hello, world!";
    int length = stringLength(str);

    printf("The length of the string is: %d\n", length);

    return 0;
}
