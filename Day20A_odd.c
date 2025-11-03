//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int n, rem, product = 1, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n != 0) {
        rem = n % 10;
        if(rem % 2 != 0) {
            product *= rem;
            flag = 1;
        }
        n /= 10;
    }
    if(flag)
        printf("Product of odd digits: %d\n", product);
    else
        printf("No odd digits\n");
    return 0;
}

