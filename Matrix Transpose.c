#include <stdio.h>

int main() {
    int matrix[3][3], transpose[3][3];
    printf("Enter 9 numbers for 3x3 matrix:\n");
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
            transpose[j][i] = matrix[i][j];
        }
    }
    
    printf("Transpose matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}