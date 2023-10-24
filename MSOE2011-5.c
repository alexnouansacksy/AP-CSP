// Alex Nouansacksy
// MSOE 2011 Question 5
// 10/23/2023

#include <stdio.h>
#include <math.h>

double a6= -0.09;
double a5 = 1.6108;
double a4 = -10.9167;
double a3 = 34.7625;
double a2 = -52.0433;
double a1 = 31.1767;
double a0 = -4;

double f(double x) {
    double fx = (a6 * pow(x, 6)) + (a5 * pow(x, 5)) + (a4 * pow(x,4)) + (a3 * pow(x, 3)) + (a2 * pow(x, 2)) + (a1 * x) + a0;
    return fx;
}

double fprime(double x) {
    double fprimex = (6 * a6 * pow(x, 5)) + (5 * a5 * pow(x, 4)) + (4 * a4 + pow(x, 3)) + (3 * a3 + pow(x, 2)) + (2 * a2 * x) + a1;
    return fprimex;
}


int main() {
    printf("enter num: ");
    double x;
    scanf("%lf", &x);
    printf("Initial Position: f(%.1f) = %.9f\n", x, f(x));
    while (abs(f(x)) > 0.001){
        x = x - (f(x) / fprime(x));
        printf("Refind zero: f(%.5f) = %.9f\n", x, f(x));
    } 
    
}