//Min and Max of 1D array

#include <stdio.h>

#define SIZE 10

int main() {
    int array[SIZE];
    int i;
    int min, max;

    printf("Enter %d integers:\n", SIZE);
    
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &array[i]);
    }
    
    
    min = array[0];
    max = array[0];
    
    
    for (i = 1; i < SIZE; i++) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }
    
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}