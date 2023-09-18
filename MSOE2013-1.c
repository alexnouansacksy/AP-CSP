// MSOE 2013 QUESTION 1
// Created by alex on 9/13/2023.

#include <stdio.h>
#include <math.h>
#include <math.h>
int main() {
    int res1;
    int res2;
    int res3;
    int voltage;
    double resistance;

    printf("resistance 1:");
    scanf("%d", &res1);
    printf("resistance 2:");
    scanf("%d", &res2);
    printf("resistance 3:");
    scanf("%d", &res3);

    printf("voltage:");
    scanf("%d", &voltage);

    double current1 = voltage / (double) res1;
    double current2 = voltage / (double) res2;
    double current3 = voltage / (double) res3;
    double currents = current1 + current2 + current3;

    resistance = voltage / currents;

    printf("Resistance is %.2f", resistance);

}

/*
resistance 1:500
resistance 2:1000
resistance 3:2500
voltage:5
Resistance is 294.12
Process finished with exit code 20
 */