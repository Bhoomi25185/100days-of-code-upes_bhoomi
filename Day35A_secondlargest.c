//Find the second largest element in an array.
#include <stdio.h>

int main() {
    int n, i, a[100], largest, second;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    if(a[0] > a[1]) {
        largest = a[0];
        second = a[1];
    } else {
        largest = a[1];
        second = a[0];
    }
    for(i = 2; i < n; i++) {
        if(a[i] > largest) {
            second = largest;
            largest = a[i];
        } else if(a[i] > second && a[i] != largest)
            second = a[i];
    }
    printf("Second largest element: %d\n", second);
    return 0;
}

