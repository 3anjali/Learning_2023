/*   Use structures to find the volume and the total surface area of the box. 
   You need to access the members of the structure with the help of a structure pointer:
    a. With the help of (*) asterisk or indirection operator and (.) dot operator.
    b. With the help of ( -> ) Arrow operator using pointer as well as dot representation. */ 

#include <stdio.h>
struct Box {
    float length;
    float width;
    float height;
};

float calculateVolume(struct Box* box) {
    return box->length * box->width * box->height;
}

float calculateSurfaceArea(struct Box* box) {
    return 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
}

int main() {
    struct Box B1;
    B1.length = 7.0;
    B1.width = 3.0;
    B1.height = 2.0;

    struct Box* boxPtr = &B1;
    float volume = boxPtr->length * boxPtr->width * boxPtr->height;
    float surfaceArea = 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height);
    
    printf("Volume: %.4f\n", volume);
    printf("Surface Area: %.4f\n", surfaceArea);

    return 0;
}