#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter 10 numbers:\n");
    
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Even numbers:\n");
    for(int i = 0; i < 10; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}