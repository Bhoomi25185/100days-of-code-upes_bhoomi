//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
#define PI 3.14159

int main() {
    double radius;
    printf("Enter radius: ");
    scanf("%lf", &radius);
    printf("Area: %.2lf\n", PI * radius * radius);
    printf("Circumference: %.2lf\n", 2 * PI * radius);
    return 0;
}

