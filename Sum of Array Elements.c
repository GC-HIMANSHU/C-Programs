#include <stdio.h>

int main() {
    int arr[10], sum = 0;
    printf("Enter 10 numbers:\n");
    
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    printf("Sum of array elements: %d\n", sum);
    return 0;
}