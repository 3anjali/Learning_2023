#include <stdio.h>

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int size = sizeof(array) / sizeof(array[0]);

    int total_sum = 0;
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            total_sum += array[i];
        }
    }

    printf("Sum of alternate elements: %d\n", total_sum);

    return 0;
}


