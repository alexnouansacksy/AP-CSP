#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Enter your number: ");
    int num;
    scanf("%d", &num);
    bool prime = true;
    for (int i = num-1; i > 1; i--) if (num % i == 0) prime = false;
    if (prime) printf("prime");
    else printf("not prime");
}

/*
PS C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP> .\MSOE2009-5
Enter your number: 293
prime
PS C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP> .\MSOE2009-5
Enter your number: 7429
not prime
*/