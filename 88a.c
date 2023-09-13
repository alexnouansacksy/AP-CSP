// Prog88a
// Created by alex on 9/13/2023.

#include <stdio.h>
#include <math.h>

int abs(int a);
int main() {
    int num1;
    int num2;
    printf("Enter number 1-13:");
    scanf("%d", &num1);
    printf("Enter number 2-20:");
    scanf("%d", &num2);

    printf("The original numbers are %d and %d", num1, num2);
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    double average = (num1 + num2) / (double) 2;
    int absolutevalue = abs(difference);
    int max;
    int min;
    if (num1 > num2) {
        max = num1;
        min = num2;
    } else {
        max = num2;
        min = num1;
    }

    printf("\nSum = %d\nDifference = %d\nProduct = %d\nAverage = %.1f\nAbsolute Value = %d\nMaximum = %d\nMinimum = %d",
           sum, difference, product, average, absolutevalue, max, min);

}
/*
Enter number 1-13:13
Enter number 2-20:20
The original numbers are 13 and 20
Sum = 33
Difference = -7
Product = 260
Average = 16.5
Absolute Value = 7
Maximum = 20
Minimum = 13
Process finished with exit code 99
 */