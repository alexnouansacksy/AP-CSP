// Alex Nouansacksy
// MSOE 2009 Question 4
// 10/05/2023
#include <stdio.h>
#include <math.h>
#include <cmath>

double f(double x ) {
    static const double pi = atan(1.0)*4.0;
    return exp(-x*x/2)/sqrt(2*pi);
}

int main() {
    printf("Enter A: ");
    int a;
    scanf("%d", &a);

    printf("Enter B: ");
    int b;
    scanf("%d", &b);

    printf("Enter n: ");
    int n;
    scanf("%d", &n);

    double h = (b-a) / (double) n;
    
    double answer;

    for (int i = 0; i < n; i++)  answer += f(a + h * i);
    
    answer *= h;
    printf("%.2f", answer);

}
/*
PS C:\Users\Alex Nouansacksy\Desktop\AP-CSP\AP-CSP> .\MSOE2009-4
Enter A: 1
Enter B: 2
Enter n: 3
0.17
*/