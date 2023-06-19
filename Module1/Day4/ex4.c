// diff between even and odd elements

#include <stdio.h>

int main() {
    int arr[] = {1, 21, 31, 44, 52, 6, 77, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int oddSum = 0, evenSum = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Sum of odd numbers: %d\n", oddSum);
    printf("Sum of even numbers: %d\n", evenSum);

    return 0;
}