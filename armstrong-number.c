#include <stdio.h>
#include <math.h>

int main() {
    int num, original, digits = 0, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    
    // Count number of digits
    int temp = original;
    while(temp != 0) {
        digits++;
        temp /= 10;
    }
    
    temp = original;
    while(temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    
    if(sum == original) {
        printf("%d is an Armstrong number\n", original);
    } else {
        printf("%d is not an Armstrong number\n", original);
    }
    return 0;
}