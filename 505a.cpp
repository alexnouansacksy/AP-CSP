#include <stdio.h>
using namespace std;
#include <iostream>



int main() {
    FILE * input;
    input = fopen("C:\\Users\\Alex Nouansacksy\\Desktop\\AP-CSP\\AP-CSP\\data\\prog505a.txt", "r1");
    printf("Enter amount of workers: ");
    int workers;
    scanf("%d", &workers);

    string firsts[workers];
    string lasts[workers];
    int booksread[workers];

    string first = "";
    string last = "";
    int books = -1;
    int i = 0;

    fscanf(input, "%s %s %d", first, last, &books);

    firsts[i] = first;
    lasts[i] = last;
    booksread[i] = books;

    printf("%s %s %d", firsts[i], lasts[i], booksread[i]);
    for (int idk : booksread) printf("\n%d", idk);

    

}
