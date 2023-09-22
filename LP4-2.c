// Alex Nouansacksy
// LP 4-2
// 9/21/2023

#include <stdio.h>

int main() {
    int weight;
    int length;
    int width;
    int height;
    int volume;

    printf("Enter package weight in kilograms: ");
    scanf("%d", &weight);
    printf("Enter package length in centimmeters: ");
    scanf("%d", &length);
    printf("Enter package width in centimeters: ");
    scanf("%d", &width);
    printf("Enter package height in centimeters: ");
    scanf("%d", &height);

    volume = length * width * height;

    if (weight > 27 && volume > 100000) printf("Too heavy and too large.");
    else if (weight > 27) printf("Too heavy.");
    else if (volume > 100000) printf("Too large.");
    else printf("Your package meets the requirements.");

}
/*
PS C:\Users\alexn\Desktop\AP-CSP> .\LP4-2
Enter package weight in kilograms: 32
Enter package length in centimmeters: 10
Enter package width in centimeters: 25
Enter package height in centimeters: 38
Too heavy.
*/
