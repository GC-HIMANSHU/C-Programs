#include <stdio.h>

int main() {
    int mat1[3][3], mat2[3][3], sum[3][3];
    
    printf("Enter first 3x3 matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("Enter second 3x3 matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    printf("Sum of matrices:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
