//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, rem, digits = 0;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(temp != 0) {
        temp /= 10;
        digits++;
    }
    temp = n;
    while(temp != 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    if(sum == n)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong Number\n");
    return 0;
}

