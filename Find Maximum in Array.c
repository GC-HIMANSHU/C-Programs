#include <stdio.h>

int main() {
    int arr[10], max;
    printf("Enter 10 numbers:\n");
    
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if(i == 0 || arr[i] > max) {
            max = arr[i];
        }
    }
    
    printf("Maximum element: %d\n", max);
    return 0;
}