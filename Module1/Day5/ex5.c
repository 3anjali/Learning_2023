/*  Write a program to demonstrate the swapping the fields of two structures using pointers*/
#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

void swapPoints(Point* p1, Point* p2) {
    Point temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    Point point1 = {3, 5};
    Point point2 = {7, 9};

    printf("Before swapping:\n");
    printf("Point 1: x = %d, y = %d\n", point1.x, point1.y);
    printf("Point 2: x = %d, y = %d\n", point2.x, point2.y);

    swapPoints(&point1, &point2);

    printf("\nAfter swapping:\n");
    printf("Point 1: x = %d, y = %d\n", point1.x, point1.y);
    printf("Point 2: x = %d, y = %d\n", point2.x, point2.y);

    return 0;
}