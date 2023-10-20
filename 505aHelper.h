#include <stdio.h>

int points(int books) {
    if (books <= 3) return books * 10;
    else if (books <= 6) return (3 * 10) + ((books - 3) * 15);
    else return (3 * 10) + (3 * 15) + ((books - 6) * 20);
}

double getAverage(int points[], int length) {
    double avg = 0;
    for (int i = 0; i < length; i++) avg += points[i];
    return avg/length;
}