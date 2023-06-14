#include <stdio.h>

int findLargest(int num1, int num2) {
    int largest;

    if (num1 > num2) {
        largest = num1;
    } else {
        largest = num2;
    }

    return largest;
}

int findLargestTernary(int num1, int num2) {
    int largest = (num1 > num2) ? num1 : num2;
    return largest;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int largest = findLargest(num1, num2);
    printf("The largest number using if-else is: %d\n", largest);

    int largestTernary = findLargestTernary(num1, num2);
    printf("The largest number using the ternary operator is: %d\n", largestTernary);

    return 0;
}