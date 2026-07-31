#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];
    float total_marks = 0;
    float avg_marks;
    int highest_index = 0;

    printf("Enter details for 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_no);

        getchar();

        printf("Enter Name: ");
        scanf("%[^\n]s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);

        total_marks += s[i].marks;

        if (s[i].marks > s[highest_index].marks) {
            highest_index = i;
        }
    }

    printf("\n---------------------------------------------\n");
    printf("%-10s %-20s %-10s\n", "Roll No", "Name", "Marks");
    printf("---------------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%-10d %-20s %-10.2f\n", s[i].roll_no, s[i].name, s[i].marks);
    }
    printf("---------------------------------------------\n");

    avg_marks = total_marks / 5.0;

    printf("\n--- Statistical Summary ---\n");
    printf("Highest Marks: %.2f (Scored by: %s, Roll No: %d)\n",
            s[highest_index].marks, s[highest_index].name, s[highest_index].roll_no);
    printf("Average Marks of the Class: %.2f\n", avg_marks);

    return 0;
}

