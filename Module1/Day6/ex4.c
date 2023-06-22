// Write a function to sort the array of structures in descending order based on marks 


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

void displayStudents(const struct Student* students, int size) {
    printf("Roll No\tName\tMarks\n");
    for (int i = 0; i < size; i++) {
        printf("%d\t%s\t%.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }
}
int compareDescending(const void* a, const void* b) {
    const struct Student* studentA = (const struct Student*)a;
    const struct Student* studentB = (const struct Student*)b;

    if (studentA->marks < studentB->marks) {
        return 1;
    } else if (studentA->marks > studentB->marks) {
        return -1;
    } else {
        return 0;
    }
}
void sortStudentsDescending(struct Student* students, int size) {
    qsort(students, size, sizeof(struct Student), compareDescending);
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
    printf("\n Student Details:\n");
    displayStudents(students, size);
    sortStudentsDescending(students, size);

    printf("\nStudent Details after Sorting:\n");
    displayStudents(students, size);


     free(students);

    return 0;
}
