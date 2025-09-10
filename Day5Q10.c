#include <stdio.h>
//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/


int main() {
    int total_seconds, hours, minutes, seconds;

    // Input time in seconds
    scanf("%d", &total_seconds);

    // Calculate hours
    hours = total_seconds / 3600;

    // Calculate remaining minutes
    minutes = (total_seconds % 3600) / 60;

    // Calculate remaining seconds
    seconds = total_seconds % 60;

    // Print in hours:minutes:seconds format
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}


