#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("Character: %c\nASCII Value: %d\n", ch, ch);
    return 0;
}