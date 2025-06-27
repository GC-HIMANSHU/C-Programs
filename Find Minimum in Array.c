#include <stdio.h>

int main() {
    int arr[10], min;
    printf("Enter 10 numbers:\n");
    
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if(i == 0 || arr[i] < min) {
            min = arr[i];
        }
    }
    
    printf("Minimum element: %d\n", min);
    return 0;
}