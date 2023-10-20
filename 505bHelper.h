#include <stdio.h>

double studentAverage (int tests[]) {
    int size = 5;
    double average = 0;
    for (int i = 0; i < size; i++) average = average + tests[i];
    
    average = average / size;
    return average;
}

double testAverage (int tests[]) {
    int size = 3;
    double average = 0;
    for (int i = 0; i < size; i++) average = average + tests[i];
    
    average = average / size;
    return average;
}

char toGrade(double grade) {
    if (grade > 90) return 'A';
    else if (grade > 80) return 'B';
    else if (grade > 70) return 'C';
    else if (grade > 60) return 'D';
    else return 'F';

}