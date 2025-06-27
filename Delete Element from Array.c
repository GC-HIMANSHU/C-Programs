#include <stdio.h>

int main() {
    int arr[10], index;
    printf("Enter 10 numbers:\n");
    
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter index to delete (0-9): ");
    scanf("%d", &index);
    
    if(index < 0 || index >= 10) {
        printf("Invalid index\n");
        return 1;
    }
    
    // Shift elements to the left
    for(int i = index; i < 9; i++) {
        arr[i] = arr[i+1];
    }
    arr[9] = 0; // Set last element to 0
    
    printf("Array after deletion:\n");
    for(int i = 0; i < 9; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}