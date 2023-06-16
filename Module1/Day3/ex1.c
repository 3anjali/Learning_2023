//Write a program to print the given pattern below using 3 functions (1st to accept n and to print from 1 to n, 2nd to accept n and print spaces in between, 3rd to accept the n and print from n to 1)

#include <stdio.h>

void printPattern(int n);
void printSpaces(int n);
void printReversePattern(int n);

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printPattern(n);

    return 0;
}

void printPattern(int n) {
	int i,j;
    for ( i = n; i >= 1; i--) {
        
        for ( j = 1; j <= i; j++) {
            printf("%d", j);
        }

        
        printSpaces(n - i);
        printReversePattern(i);
		printf("\n");
    }
}

void printSpaces(int n) {
	int i;
    for ( i = 1; i <=2*(n); i++) {
        printf(" ");
    }
}

void printReversePattern(int n) {
	int i;
    for ( i = n; i >= 1; i--) {
        printf("%d", i);
    }
}




