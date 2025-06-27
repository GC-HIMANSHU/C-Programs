
#include <stdio.h>

int main() {
    float sum = 0;
    for(int i = 1; i <= 10; i++) {
        printf("%d/%d", i, i*i);
        sum += (float)i/(i*i);
        if(i < 10) printf(" + ");
    }
    printf(" = %.2f\n", sum);
    return 0;
}