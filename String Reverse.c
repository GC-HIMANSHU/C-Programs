#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    
    // With inbuilt function
    printf("Reverse (with strrev): ");
    // Note: strrev is not standard, so we'll implement our own
    
    // Without inbuilt function
    printf("Reverse (without strrev): ");
    int length = strlen(str);
    for(int i = length-1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");
    return 0;
}