#include <stdio.h>
#include <stdlib.h>
#include "505dHelper.h"

typedef struct {
    char firstName[100];
    char lastName[100];
    int hits1;
    int bats1;
    int hits2;
    int bats2;
    int hits3;
    int bats3;
    int hits4;
    int bats4;
    int hits5;
    int bats5;
    int hits6;
    int bats6;
    int hits7;
    int bats7;
} Record;

int main() {
    FILE * input;
    input = fopen("C:\\Users\\Alex Nouansacksy\\Desktop\\AP-CSP\\AP-CSP\\data\\prog505d.txt", "r");
    
    if (input == NULL) printf("ERROR");


    Record* players =  NULL;
    int cnt = 0;
    Record temp;
    
    int something = 0;

    while ((something = fscanf(input, "%s %s %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
     temp.firstName, temp.lastName, &temp.hits1, &temp.bats1, &temp.hits2, &temp.bats2, &temp.hits3, &temp.bats3, &temp.hits4, &temp.bats4,
                                    &temp.hits5, &temp.bats5, &temp.hits6, &temp.bats6, &temp.hits7, &temp.bats7) != EOF)) {
        players = (Record*) realloc(players, (cnt+1) * sizeof(Record));
        if (players == NULL) fclose(input);
        players[cnt] = temp;
        cnt++;
    }
    fclose(input);
    int mondayHits = 0;
    int tuesdayHits = 0;
    int wednesdayHits = 0;
    int thursdayHits = 0;
    int fridayHits = 0;
    int saturdayHits = 0;
    int sundayHits = 0;

    int mondayBats = 0;
    int tuesdayBats = 0;
    int wednesdayBats = 0;
    int thursdayBats = 0;
    int fridayBats = 0;
    int saturdayBats = 0;
    int sundayBats = 0;
    for (int i = 0; i < cnt; i++) {
        
        printf("\n%s %s\t", players[i].firstName, players[i].lastName);

        dayAverage(players[i].hits1, players[i].bats1);
        dayAverage(players[i].hits2, players[i].bats2);
        dayAverage(players[i].hits3, players[i].bats3);
        dayAverage(players[i].hits4, players[i].bats4);
        dayAverage(players[i].hits5, players[i].bats5);
        dayAverage(players[i].hits6, players[i].bats6);
        dayAverage(players[i].hits7, players[i].bats7);

        mondayHits += players[i].hits1;
        tuesdayHits += players[i].hits2;
        wednesdayHits += players[i].hits3;
        thursdayHits += players[i].hits4;
        fridayHits += players[i].hits5;
        saturdayHits += players[i].hits6;
        sundayHits += players[i].hits7;
        
        mondayBats += players[i].bats1;
        tuesdayBats += players[i].bats2;
        wednesdayBats += players[i].bats3;
        thursdayBats += players[i].bats4;
        fridayBats += players[i].bats5;
        saturdayBats += players[i].bats6;
        sundayBats += players[i].bats7;

    }
    
    int hits[7] = {mondayHits, tuesdayHits, wednesdayHits, thursdayHits, fridayHits, saturdayHits, fridayHits};
    int bats[7] = {mondayBats, tuesdayBats, wednesdayBats, thursdayBats, fridayBats, saturdayBats, sundayBats};

    for (int i = 0; i < 7; i++) {
        if (i == 0) printf("\nMonday\t\t%d\t", hits[i]);
        else if (i == 1) printf("Tuesday\t\t%d\t",  hits[i]);
        else if (i == 2) printf("Wednesday\t%d\t",  hits[i]);
        else if (i == 3) printf("Thursday\t%d\t",  hits[i]);
        else if (i == 4) printf("Friday\t\t%d\t",  hits[i]);
        else if (i == 5) printf("Saturday\t%d\t",  hits[i]);
        else if (i == 6) printf("Sunday\t\t%d\t",  hits[i]);
        dayAverage(hits[i], bats[i]);
        printf("\n");
    }
    
    int totalHits = mondayHits + tuesdayHits + wednesdayHits + thursdayHits + fridayHits + saturdayHits + sundayHits;
    printf("Total Hits:\t%d", totalHits);

    free(players);    
}
/*
PS C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP> .\505d

Fred Sluggo     0.50 0.25 0.33 0.25 0.00 0.00 1.00
Lydia Crusher   0.67 0.67 0.80 0.40 0.25 1.00 0.25
Braeden Boomer  1.00 0.50 0.63 0.50 0.20 0.33 0.00
Noah Niller     0.33 0.57 0.33 0.75 0.50 0.33 0.29
Ruben Romper    0.00 0.33 0.50 0.40 0.29 0.38 0.00
Lisa Longball   1.00 0.50 0.71 0.25 0.75 0.50 0.20
Claire Corner   0.25 0.67 0.38 0.44 0.80 0.33 0.20
Jared Just      1.00 0.50 0.40 0.29 0.13 1.00 0.33
Monday          8       0.47
Tuesday         19      0.51
Wednesday       24      0.52
Thursday        19      0.40
Friday          16      0.36
Saturday        15      0.39
Sunday          16      0.43
Total Hits:     113
*/
