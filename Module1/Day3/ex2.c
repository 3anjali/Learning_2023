//Prints Bits:Scan a 32bit integer and prints its bits.Concepts to be used.- Loops - Bitwise Operators

#include <stdio.h>

void printBits(unsigned int num);

int main() {
    unsigned int num;

    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Bits: ");
    printBits(num);

    return 0;
}

void printBits(unsigned int num) {
    int i;
    unsigned int mask = 1 << 31;  

    for (i = 0; i < 32; i++) {
        unsigned int bit = (num & mask) ? 1 : 0;  

        printf("%u", bit);

        num = num << 1;  
    }

    printf("\n");
}
