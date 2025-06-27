#include <stdio.h>

int main() {
    int matrix[3][3], max;
    printf("Enter 9 numbers for 3x3 matrix:\n");
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
            if(i == 0 && j == 0) {
                max = matrix[i][j];
            } else if(matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
    
    printf("Largest element: %d\n", max);
    return 0;
}