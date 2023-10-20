#include <stdio.h>
void dayAverage(int hits, int bats) {
    double average = hits / (double) bats;
    printf("%.2f ", average);
}