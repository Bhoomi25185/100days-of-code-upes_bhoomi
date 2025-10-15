//Write a program to input two numbers and display their
// sum, difference, product, and quotient.
#include <stdio.h>

int main() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Sum: %.2lf\n", a + b);
    printf("Difference: %.2lf\n", a - b);
    printf("Product: %.2lf\n", a * b);
    if (b != 0)
        printf("Quotient: %.2lf\n", a / b);
    else
        printf("Division by zero is not allowed.\n");
    return 0;
}
