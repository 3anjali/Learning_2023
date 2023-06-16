//Find the largest number by deleting single digit in a 4 digit number 5872 - 872, 9856 - 986

/*Concepts to be used.
- Loops and operators*/

#include <stdio.h>

int findLargestNumber(int num);

int main() {
    int num;

    printf("enter a 4-digit number: ");
    scanf("%d", &num);

    int largestNumber = findLargestNumber(num);

    printf("largest number by deleting a single digit: %d\n", largestNumber);

    return 0;
}

int findLargestNumber(int num) {
    int largest = 0,i,j;
    int temp = num;

    for ( i = 0; i < 4; i++) {
        int divisor = 1;

        for (j = 0; j < i; j++) {
            divisor *= 10;
        }

        int truncatedNum = (temp / (divisor * 10)) * divisor + (temp % divisor);

        if (truncatedNum > largest) {
            largest = truncatedNum;
        }
    }

    return largest;
}

