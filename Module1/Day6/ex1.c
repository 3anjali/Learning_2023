/*Assume User will be providing input in the form of a string as show below. 
Write a function to parse the string and initialize an array of structures.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseInputString(const char* inputString, struct Student* students, int size) {
    char temp[20];
    sscanf(inputString, "%d %s %f", &(students[size].rollno), temp, &(students[size].marks));
    strncpy(students[size].name, temp, sizeof(students[size].name) - 1);
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    getchar();

    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    for (int i = 0; i < size; i++) {
        char inputString[100];
        printf("Enter details for student %d: ", i + 1);
        fgets(inputString, sizeof(inputString), stdin);
        parseInputString(inputString, students, i);
    }

    for (int i = 0; i < size; i++) {
        printf("Student %d: Roll No: %d, Name: %s, Marks: %.2f\n",
               i + 1, students[i].rollno, students[i].name, students[i].marks);
    }

    free(students);

    return 0;