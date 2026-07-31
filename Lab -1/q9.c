#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[5];
    struct Student *ptr = s;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter details of Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &(ptr + i)->roll);

        printf("Enter Name: ");
        scanf(" %49[^\n]", (ptr + i)->name);

        printf("Enter Marks: ");
        scanf("%f", &(ptr + i)->marks);

        printf("\n");
    }

    printf("Student Details\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Roll Number: %d\n", (ptr + i)->roll);
        printf("Name: %s\n", (ptr + i)->name);
        printf("Marks: %.2f\n\n", (ptr + i)->marks);
    }

    return 0;
}
