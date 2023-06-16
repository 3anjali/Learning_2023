//Write a program to find both smallest and largest digits in given n numbers

#include <stdio.h>

void findSmallestLargestDigits(int n, int numbers[]);

int main() {
    int n,i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int numbers[n];

    printf("Enter the numbers:\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    findSmallestLargestDigits(n, numbers);

    return 0;
}

void findSmallestLargestDigits(int n, int numbers[]) {
	int i;
    for ( i = 0; i < n; i++) {
        int num = numbers[i];
        int smallestDigit = 9;
        int largestDigit = 0;
        int validDigitsFound = 0;
        int numCopy = num;
        int digitCount = 0;

        while (numCopy != 0) {
            numCopy /= 10;
            digitCount++;
        }

        if (digitCount == 1) {
            printf("Not Valid for number %d\n", numbers[i]);
            continue;
        }

        while (num != 0) {
            int digit = num % 10;

            if (digit < smallestDigit) {
                smallestDigit = digit;
            }

            if (digit > largestDigit) {
                largestDigit = digit;
            }

            num /= 10;
            validDigitsFound = 1;
        }

        if (validDigitsFound == 0) {
            printf("Not Valid for number %d\n", numbers[i]);
        } else {
            printf("Smallest Digit for number %d: %d\n", numbers[i], smallestDigit);
            printf("Largest Digit for number %d: %d\n", numbers[i], largestDigit);
        }
    }
}



