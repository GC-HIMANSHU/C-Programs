#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline
    
    // With inbuilt function
    printf("Length (with strlen): %lu\n", strlen(str));
    
    // Without inbuilt function
    int length = 0;
    while(str[length] != '\0') {
        length++;
    }
    printf("Length (without strlen): %d\n", length);
    
    return 0;
}