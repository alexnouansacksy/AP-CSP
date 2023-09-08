// Prog52a
// Created by alex on 9/7/2023.
#include <stdio.h>

int main() {
    int length;
    printf("Length: ");
    scanf("%d", &length);

    int width;
    printf("Width: ");
    scanf("%d", &width);

    int area = length * width;
    int perimeter = (length * 2) + (width * 2);

    printf("area is %d\nperimeter is %d", area, perimeter);
}
/*
Length:12
 Width:12
 area is 144
perimeter is 48
Process finished with exit code 27

 */