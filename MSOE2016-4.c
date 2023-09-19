// MSOE 2016 QUESTION 4
// Created by alex on 9/18/2023.

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int prime(int a, int b) {
    if (a == 0) return b;
    int c = b % a;
    return prime(c, a);
}

int main() {
    printf("enter yo num:");
    int num;
    scanf("%d", &num);

    int primes = 1;
    int i;
    for ( i = 2; i < num; i++) {
        if(prime(i, num) == 1) primes++;
    }

    printf("that number has %d relative primes", primes);
}

/*
enter yo num:1500
that number has 400 relative primes
Process finished with exit code 35
 */