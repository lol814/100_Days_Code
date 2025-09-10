#include <stdio.h>

//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

int main() {
    float radius, area, circumference;

    printf("Enter the radius of the circle:\n");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    printf("Area= %.2f , Circumference = %.2f" , area , circumference);
    

    return 0;
}

	



