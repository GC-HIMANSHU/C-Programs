#include <stdio.h>

int main() {
    char ch = 'A';
    for(int i = 5; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("%c", ch + 5 - i);
        }
        printf("\n");
    }
    return 0;
}