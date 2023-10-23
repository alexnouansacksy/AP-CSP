#include <stdio.h>
#include <stdbool.h>
void isPrime(int n) {
    bool prime = true;
    for (int i = n-1; i > 1; i--) if (n % i == 0) prime = false;
    if (prime) printf("prime");
    else printf("not prime");
}

int main() {
    printf("Enter your number: ");
    int num;
    scanf("%d", &num);
    isPrime (num);
}

/*
PS C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP> .\MSOE2009-5
Enter your number: 293
prime
PS C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP> .\MSOE2009-5
Enter your number: 7429
not prime
*/