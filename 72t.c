// Prog72t
// Created by alex on 9/12/2023.

#include <stdio.h>
#include <math.h>

int main() {
    printf("Enter the first time:");
    int firstTime;
    scanf("%d", &firstTime);

    printf("Enter the second time:");

    int secondTime;
    scanf("%d", &secondTime);

    int difference;
    if (secondTime > firstTime) difference = secondTime - firstTime;
    else difference = (2400 - firstTime - 40) + secondTime;

    int hours = difference / 100;
    difference -= (hours * 100);

    int minutes = difference;

    printf("%d hours %d minutes", hours, minutes);
}
/*
Enter the first time:900
Enter the second time:1730
8 hours 30 minutes
Process finished with exit code 18

Enter the first time:1730
Enter the second time:900
15 hours 30 minutes
Process finished with exit code 19
 */
