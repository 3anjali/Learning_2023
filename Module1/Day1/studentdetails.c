#include <stdio.h>

int main() {
    int roll_no;
    char name[100];
    float physics, math,chemistry;
    float total_marks, percentage;
    printf("Enter Roll No: ");
    scanf("%d", &roll_no);
    
    printf("Enter Name: ");
    scanf(" %[^\n]s", name);

    printf("Enter Physics Marks: ");
    scanf("%f", &physics);

    printf("Enter Math Marks: ");
    scanf("%f", &math);

    printf("Enter Chemistry Marks: ");
    scanf("%f", &chemistry);

    total_marks = physics + math + chemistry;
    percentage = (total_marks / 300) * 10

    printf("\n Student Summary\n");
    printf("Roll No: %d\n", roll_no);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n",physics);
    printf("Math Marks: %.2f\n",math);
    printf("Chemistry Marks: %.2f\n",chemistry);
    printf("Total Marks: %.2f\n", total_marks);
    printf("Percentage: %.2f\n", percentage);

    return 0;
}