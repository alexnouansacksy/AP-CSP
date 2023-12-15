#include <stdio.h>

int askQuestion() {
    int num;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("What would you like me to do?\n");
    printf("[1] Calculate Grades\n");
    printf("[2] Add Student\n");
    printf("[3] Add Grade\n");
    printf("[4] Exit\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");


    printf("Enter Choice: ");
    scanf("%d", &num);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    return num;
}

void displayGrades(int students, char[][] list) {
    if (students == 0) printf("No students. ");
    else {
        printf("Gradebook\n\n");
            for (int j = 0; j < i; j++) {
                printf("%s", alex[j]);
            }
    }
}
