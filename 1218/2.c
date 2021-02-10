#include <stdio.h>

int main(void)
{
    struct data
    {
        char school[10];
        char department[10];
        int  numbers;
        char name[10];
        int score;
    }student;


    scanf("%s", student.school);
    scanf("%s", student.department);
    scanf("%d", &student.numbers);
    getchar();
    gets(student.name);

    scanf("%d", &student.score);


    printf("\nThe information you have entered are as follows:\n");
    printf("School name: %s\n", student.school);
    printf("Department: %s\n", student.department);
    printf("Student ID: %d\n", student.numbers);
    printf("Name: %s\n", student.name);
    printf("Grade of C programming: %d\n", student.score);

    return 0;
}
