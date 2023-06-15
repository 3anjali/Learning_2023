#include <stdio.h>

void printExponent(double x) {
    unsigned long long exponent;
    unsigned int hexExponent;
    unsigned int binaryExponent[11]; // 11 bits for double exponent

    // Convert the double value to an unsigned long long to access the binary representation
    union {
        double d;
        unsigned long long ull;
    } u;
    u.d = x;
    exponent = (u.ull >> 52) & 0x7FF; // Extract the exponent bits

    // Convert the exponent to hexadecimal
    hexExponent = exponent;
    printf("Exponent in hexadecimal: 0x%X\n", hexExponent);

    // Convert the exponent to binary
    for (int i = 10; i >= 0; i--) {
        binaryExponent[i] = exponent % 2;
        exponent /= 2;
    }

    // Print the exponent in binary
    printf("Exponent in binary: 0b");
    for (int i = 0; i <= 10; i++) {
        printf("%d", binaryExponent[i]);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}