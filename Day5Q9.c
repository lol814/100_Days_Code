#include <stdio.h>
//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include <math.h>

int main() {
    double principal, rate, time;
    double simple_interest, compound_interest;

    // Input principal, rate, and time
    scanf("%lf %lf %lf", &principal, &rate, &time);

    // Calculate simple interest
    simple_interest = (principal * rate * time) / 100;

    // Calculate compound interest
    compound_interest = principal * (pow((1 + rate / 100), time) - 1);

    // Print results with formatting similar to sample output
    printf("Simple Interest=%d, Compound Interest=%.2f\n", (int)simple_interest, compound_interest);

    return 0;
}
