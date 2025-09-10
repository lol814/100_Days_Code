#include <stdio.h>
// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/


int main() {
    int celsius;
    int fahrenheit;
    scanf("%d", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Fahrenheit=%d\n", fahrenheit);
    return 0;
}
