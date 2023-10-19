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
    input = fopen("C:\\Users\\Alex Nouansacksy\\Desktop\\AP-CSP\\AP-CSP\\data\\prog505a.dat", "r");
    
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
    for (int i = 0; i < cnt; i++) {
        printf("%s %s %d ", workers[i].firstName, workers[i].lastName, workers[i].books);
        int booksRead = workers[i].books;
        int mypoints = points(booksRead);
        printf("%d\n", mypoints);
        pointsArray[i] = mypoints;
    }

    double averagePoints = getAverage(pointsArray, cnt);
    printf("Average points per reader is: %.2f", averagePoints);
    free(workers);
   
    

}
