#include <stdio.h>
#include <stdlib.h>
#include "Project2Helper.h"

int main() {
    int num = -1;

    char claire[20][2000];
    int i=0;
    
    while (num != 4) {
        num = askQuestion();
        if (num == 1) displayGrades(i, claire);
        else if (num == 2) 
    }
}