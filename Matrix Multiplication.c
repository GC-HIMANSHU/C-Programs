#include <stdio.h>

int main() {
    int mat1[3][3], mat2[3][3], product[3][3] = {0};
    
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
    
    // Matrix multiplication
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 3; k++) {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    
    printf("Product of matrices:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}