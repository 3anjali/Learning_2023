// diff between even and odd indexed elements

#include <stdio.h>

void calculateSum(int arr[], int size) {
    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            sumEven += arr[i];  
        } else {
            sumOdd += arr[i];  
        }
    }

    printf("Sum of even-indexed elements: %d\n", sumEven);
    printf("Sum of odd-indexed elements: %d\n", sumOdd);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    calculateSum(arr, size);

    return 0;
}