// Prog54b
// Created by alex on 9/7/2023.

#include <stdio.h>

int main() {
    int num1;
    int num2;
    int num3;
    int num4;

    printf("first number:");
    scanf("%d",&num1);
    printf("second number:");
    scanf("%d",&num2);
    printf("third number:");
    scanf("%d",&num3);
    printf("fourth number:");
    scanf("%d",&num4);

    int sum = num1 + num2 + num3 + num4;
    double average =  (double)sum / 4;

    printf("The sum of the numbers is %d\nThe average of the four numbers is %g", sum, average);
}

// first number:13
// second number:14
// third number:15
// fourth number:16
// The sum of the numbers is 58
// The average of the four numbers is 14.5
// Process finished with exit code 68