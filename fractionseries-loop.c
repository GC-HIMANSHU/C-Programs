#include <stdio.h>

int main() {
    for(int i = 1; i <= 10; i++) {
        printf("%d/%d ", i, i*i);
    }
    printf("\n");
    return 0;
}