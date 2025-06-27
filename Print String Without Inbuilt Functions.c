#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    
    // Read string without using gets()
    int i = 0;
    char ch;
    while((ch = getchar()) != '\n' && i < 99) {
        str[i++] = ch;
    }
    str[i] = '\0';
    
    // Print string without using puts()
    printf("You entered: ");
    for(int j = 0; str[j] != '\0'; j++) {
        putchar(str[j]);
    }
    printf("\n");
    return 0;
}