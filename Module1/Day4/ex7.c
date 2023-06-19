// convert String as interger

#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    int number;

    printf("Enter a string: ");
    scanf("%s", str);

    number = atoi(str);

    printf("String: %s\n", str);
    printf("Number: %d\n", number);

    return 0;
}