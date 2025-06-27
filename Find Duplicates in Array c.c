#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter 10 numbers:\n");
    
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Duplicate elements:\n");
    for(int i = 0; i < 9; i++) {
        for(int j = i+1; j < 10; j++) {
            if(arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                break;
            }
        }
    }
    return 0;
}
