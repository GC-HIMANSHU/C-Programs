#include <stdio.h>

int main() {
    int rows = 5;
    
    // Upper part
    for(int i = 1; i <= rows; i++) {
        for(int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for(int j = 1; j <= 2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    // Lower part
    for(int i = rows-1; i >= 1; i--) {
        for(int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for(int j = 1; j <= 2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}