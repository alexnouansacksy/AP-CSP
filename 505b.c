// Alex Nouansacksy
// Prog505b
// 10/19/2023
#include <stdio.h>
#include <stdlib.h>
#include "505bHelper.h"

typedef struct {
    char firstName[100];
    char lastName[100];
    int test1;
    int test2;
    int test3;
    int test4;
    int test5;
    int average;
    char grade; 
} Record;

int main() {
    FILE * input;
    input = fopen("C:\\Users\\Alex Nouansacksy\\Downloads\\apcsp\\AP-CSP\\data\\prog505b.txt", "r");
    
    if (input == NULL) printf("ERROR");


    Record* students =  NULL;
    int cnt = 0;
    Record temp;
    
    int something = 0;

    int tests[5];
    while ((something = fscanf(input, "%s %s %d %d %d %d %d", temp.firstName, temp.lastName, &temp.test1, &temp.test2, &temp.test3, &temp.test4, &temp.test5) != EOF)) {
        students = (Record*) realloc(students, (cnt+1) * sizeof(Record));
        if (students == NULL) fclose(input);
        students[cnt] = temp;
        cnt++;
    }
    fclose(input);
    
    int test1[3];
    int test2[3];
    int test3[3];
    int test4[3];
    int test5[3];


    int acount = 0;
    int bcount = 0;
    int ccount = 0;
    int dcount = 0;
    int fcount = 0;

    for (int i = 0; i < cnt; i++) {
        printf("%s %s\t\t%d\t%d\t%d\t%d\t%d", students[i].firstName, students[i].lastName, students[i].test1, students[i].test2, students[i].test3, students[i].test4, students[i].test5);
        tests[0] = students[i].test1;
        tests[1] = students[i].test2;
        tests[2] = students[i].test3;
        tests[3] = students[i].test4;
        tests[4] = students[i].test5;

        test1[i] = students[i].test1;
        test2[i] = students[i].test2;
        test3[i] = students[i].test3;
        test4[i] = students[i].test4;
        test5[i] = students[i].test5;




        double average = studentAverage(tests);
        char grade = toGrade(average);
        printf("\t%.2f %c\n", average, grade);
        if (grade == 'A') acount++;
        if (grade == 'B') bcount++;
        if (grade == 'C') ccount++;
        if (grade == 'D') dcount++;
        if (grade == 'F') fcount++;

    
    }

    double average1 = testAverage(test1);
    double average2 = testAverage(test2);
    double average3 = testAverage(test3);
    double average4 = testAverage(test4);
    double average5 = testAverage(test5);



    printf("Test 1\t%.2f\nTest 2\t%.2f\nTest 3\t%.2f\nTest 4\t%.2f\nTest 5\t%.2f", average1, average2, average3, average4, average5);
    printf("\nA: %d\nB: %d\nC: %d\nD; %d\nF: %d", acount, bcount, ccount, dcount, fcount); 

    
    free(students);
    return 0;
   
    
}
/*
PS C:\Users\alexn\Desktop\AP-CSP> .\505b
Sam Lilly               80      77      82      86      90      83.00 B
Fred Biggie             70      72      88      90      93      82.60 B
Sally Awesome           92      91      85      99      93      92.00 A
Test 1  80.67
Test 2  80.00
Test 3  85.00
Test 4  91.67
Test 5  92.00
A: 1
B: 2
C: 0
D; 0
F: 0
*/