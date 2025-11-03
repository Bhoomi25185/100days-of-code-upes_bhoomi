//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    int n, digit, count[10] = {0}, max = 0, most = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n < 0) n = -n;
    while(n != 0) {
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }
    for(int i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            most = i;
        }
    }
    printf("Digit occurring most times: %d\n", most);
    return 0;
}

