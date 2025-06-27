#include <stdio.h>

int main() {
    int arr[10], num, found = 0;
    printf("Enter 10 numbers in sorted order:\n");
    
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter number to search: ");
    scanf("%d", &num);
    
    int left = 0, right = 9, mid;
    while(left <= right) {
        mid = (left + right) / 2;
        if(arr[mid] == num) {
            printf("%d found at index %d\n", num, mid);
            found = 1;
            break;
        } else if(arr[mid] < num) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    if(!found) {
        printf("%d not found in array\n", num);
    }
    return 0;
}