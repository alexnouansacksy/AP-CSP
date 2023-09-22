// Alex Nouansacksy
// LP 4-3
// 9/21/2023

#include <stdio.h>

int main() {
    printf("Enter the number of eggs purchased: ");
    int eggs;
    scanf("%d", &eggs);

    int dozen = eggs / 12;
    int remaining = eggs % 12;

    double perDozen;
    if (dozen < 4 ) perDozen = 0.50;
    else if (dozen < 6) perDozen = 0.45;
    else if (dozen < 11) perDozen = 0.40;
    else perDozen = 0.35;

    double totCost;
    totCost = dozen * perDozen + remaining * (perDozen / 12);

    printf("The bill is equal to: $%.2f", totCost);
}
/*
PS C:\Users\alexn\Desktop\AP-CSP> .\LP4-3
Enter the number of eggs purchased: 18
The bill is equal to: $0.75
*/