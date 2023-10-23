// Alex Nouansacksy
// Prog505a
// 10/19/2023
#include <stdio.h>
#include <stdlib.h>
#include "505aHelper.h"

typedef struct {
    char firstName[100];
    char lastName[100];
    int books;
} Record;

int main() {
    FILE * input;
    input = fopen("C:\\Users\\alexn\\Desktop\\AP-CSP\\data\\prog505a.dat", "r");
    
    if (input == NULL) printf("ERROR");


    Record* workers =  NULL;
    int cnt = 0;
    Record temp;
    
    int something = 0;

    while ((something = fscanf(input, "%s %s %d", temp.firstName, temp.lastName, &temp.books) != EOF)) {
        workers = (Record*) realloc(workers, (cnt+1) * sizeof(Record));
        if (workers == NULL) fclose(input);
        workers[cnt] = temp;
        cnt++;
    }
    fclose(input);
    int pointsArray[cnt];
    int maxpoints = 0;
    printf("Reading Contest\n");
    printf("Name\t\tBooks\tPoints\n");
    for (int i = 0; i < cnt; i++) {
        printf("%s %s\t%d ", workers[i].firstName, workers[i].lastName, workers[i].books);
        int booksRead = workers[i].books;
        int mypoints = points(booksRead);
        printf("\t%d\n", mypoints);
        pointsArray[i] = mypoints;
        if (mypoints > maxpoints)  maxpoints = mypoints;
    }
    double averagePoints = getAverage(pointsArray, cnt);
    printf("Average points per reader is: %.2f", averagePoints);
    free(workers);

    printf("\nThe winner of the contest is: ");
    for (int i = 0; i < cnt; i++) {
        int booksRead = workers[i].books;
        int mypoints = points(booksRead);
        if (mypoints == maxpoints) printf("%s %s", workers[i].firstName, workers[i].lastName);
    }
}

/*
PS C:\Users\alexn\Desktop\AP-CSP> .\505a
Reading Contest
Name            Books   Points
Sam Summer      4       45
Linda Lazy      2       20
Paul Prodder    5       60
K.C. Master     8       115
Richie Reader   6       75
Average points per reader is: 63.00
The winner of the contest is: K.C. Master
*/
