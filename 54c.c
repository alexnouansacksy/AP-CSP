// Prog54c
// Created by alex on 9/7/2023.

#include <stdio.h>
const double PI = 3.14159;
int main() {
    double radius;
    printf("radius:");
    scanf("%lf", &radius );
    double area = (PI * radius * radius);
    double circumference = PI * 2 * radius;

    printf("The Area of the circle = %.3f\nThe Circumference of the circle = %.3f", area, circumference);
}
// radius:3.712
// The Area of the circle = 43.288
// The Circumference of the circle = 23.323
// Process finished with exit code 72