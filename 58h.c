// Prog58h
// Created by alex on 9/11/2023.
#include <stdio.h>
#include <math.h>

int main() {
    double amount;
    double rate;
    double compoundedPerYear;
    double daysAtInterest;

    double interest;
    double total;

    printf("Amount Saved:");
    scanf("%lf", &amount);

    printf("Interest Rate:");
    scanf("%lf", &rate);

    printf("Number of times compounded per year:");
    scanf("%lf", &compoundedPerYear);

    printf("Number of days at interest:");
    scanf("%lf", &daysAtInterest);


    total = amount * pow((1 + ((.01 * rate) / compoundedPerYear)), ((compoundedPerYear * daysAtInterest) / 365));
    interest = total - amount;



    printf("The interest earned is $%.2f", interest);
    printf("\nThe total amount in savings is now $%.2f", total);
}

/*
Amount Saved:5000
Interest Rate:11.5
Number of times compounded per year:365
Number of days at interest:900
The interest earned is $1638.9
6The total amount in savings is now $6638.96
Process finished with exit code 43
 */
