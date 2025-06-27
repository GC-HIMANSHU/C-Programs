#include <stdio.h>

int main() {
    float marks[4], total = 0, average;
    
    printf("Enter marks of 4 subjects: ");
    for(int i = 0; i < 4; i++) {
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    
    average = total / 4;
    printf("Total: %.2f\nAverage: %.2f\n", total, average);
    return 0;
}