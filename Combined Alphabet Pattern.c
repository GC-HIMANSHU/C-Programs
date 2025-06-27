#include <stdio.h>

int main() {
    char ch = 'E';
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j <= i; j++) {
            printf("%c", ch - i);
        }
        printf("\n");
    }
    for(int i = 3; i >= 0; i--) {
        for(int j = 0; j <= i; j++) {
            printf("%c", ch - i);
        }
        printf("\n");
    }
    return 0;
}