//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main() {
    double length, breadth;
    printf("Enter length and breadth: ");
    scanf("%lf %lf", &length, &breadth);
    printf("Area: %.2lf\n", length * breadth);
    printf("Perimeter: %.2lf\n", 2 * (length + breadth));
    return 0;
}
