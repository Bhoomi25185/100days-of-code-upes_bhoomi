//Write a program to check if a number is a palindrome.
#include <stdio.h>

int main() {
    int n, temp, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    if(n == rev)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
1441