// Alex Nouansacksy
// Prog505d
// 10/23/2023
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
    Record temp;
    int cnt = 0;
    int something = 0;

    while ((something = fscanf(input, "%s %s %d %d %d %d %d %d %d %d %d %d %d %d %d %d",temp.firstName, temp.lastName, 
            &temp.hits1, &temp.bats1, &temp.hits2, &temp.bats2, &temp.hits3, &temp.bats3, &temp.hits4, &temp.bats4,
            &temp.hits5, &temp.bats5, &temp.hits6, &temp.bats6, &temp.hits7, &temp.bats7) != EOF)) {
        players = (Record*) realloc(players, (cnt+1) * sizeof(Record));
        if (players == NULL) fclose(input);
        players[cnt] = temp;
        cnt++;
    }
    fclose(input);
  
    int hits[7] = {0, 0, 0, 0, 0, 0, 0};
    int bats[7] = {0, 0, 0, 0, 0, 0, 0};
    
    for (int i = 0; i < cnt; i++) {
        int playerhits[7] = {players[i].hits1, players[i].hits2, players[i].hits3, players[i].hits4, 
                            players[i].hits5, players[i].hits6, players[i].hits7}; 
        int playerbats[7] = {players[i].bats1, players[i].bats2, players[i].bats3, players[i].bats4, 
                            players[i].bats5, players[i].bats6, players[i].bats7};    
        
        printf("\n%s %s\t", players[i].firstName, players[i].lastName);

        for (int i = 0; i < 7; i++) {
            dayAverage(playerhits[i], playerbats[i]);
            hits[i] += playerhits[i];
            bats[i] += playerbats[i];
        }
    }

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
    int totalhits = 0;
    for (int i = 0; i < 7; i++) totalhits += hits[i];
    printf("Total Hits:\t%d", totalhits);

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
