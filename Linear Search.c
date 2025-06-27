#include <stdio.h>

int main() {
    int arr[10], num, found = 0;
    printf("Enter 10 numbers:\n");
    
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter number to search: ");
    scanf("%d", &num);
    
    for(int i = 0; i < 10; i++) {
        if(arr[i] == num) {
            printf("%d found at index %d\n", num, i);
            found = 1;
            break;
        }
    }
    
    if(!found) {
        printf("%d not found in array\n", num);
    }
    return 0;
}