/*Write a function to initialize all members in the above array of structures*/
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
    int i = 0;

    sscanf(inputString, "%d %s %f", &(students[i].rollno), temp, &(students[i].marks));
    strncpy(students[i].name, temp, sizeof(students[i].name) - 1);
}

void initializeStudents(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        students[i].rollno = 0;
        students[i].name[0] = '\0';
        students[i].marks = 0.0;
    }
}
int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    getchar();  // Consume the newline character after the number

    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    for (int i = 0; i < size; i++) {
        char inputString[100];
        printf("Enter details for student %d: ", i + 1);
        fgets(inputString, sizeof(inputString), stdin);
        parseInputString(inputString, &(students[i]), size);
    }
     free(students);

    return 0;
}
