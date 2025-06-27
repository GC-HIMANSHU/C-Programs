#include <stdio.h>

int main() {
    char ch = 'E';
    for(int i = 5; i >= 1; i--) {
        for(int j = 5; j >= i; j--) {
            printf("%c", ch - (5 - j));
        }
        printf("\n");
    }
    return 0;
}