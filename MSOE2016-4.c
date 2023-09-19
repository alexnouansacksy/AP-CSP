// MSOE 2016 QUESTION 4
// Created by alex on 9/18/2023.
// THIS TOOK ME 2 HOURS WTF
#include <stdio.h>
#include <math.h>

int relativePrime(int a, int b) {
    if (a == 0) return b;
    int c = b % a;
    return relativePrime(c, a);
    // THIS WILL KEEP MODDING UNTIL IT FINDS A SHARED FACTOR, WHICH WILL CAUSE THE B % A TO = 0, ENDING THE RECURSIVE ALGORITHM
    // WHEN THE RECURSION FINISHES, B WILL BE THAT SHARED FACTOR
    // IF THE ONLY SHARED FACTOR IS 1, THEN WE KNOW THAT IT IS A RELATIVE PRIME
}

int main() {
    printf("enter yo num:");
    int num;
    scanf("%d", &num);

    int primes = 1;
    int i;
    for ( i = 2; i < num; i++) {
        // 1 IS ALWAYS A RELATIVE PRIME SO WE SKIP THAT
        // WE START WITH 2 AND GO UP TO THE NUMBER WE WANT
        if(relativePrime(i, num) == 1) primes++;
    }

    printf("that number has %d relative primes", primes);
}

/*
enter yo num:1500
that number has 400 relative primes
Process finished with exit code 35
 */