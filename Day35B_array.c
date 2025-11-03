//Rotate an array to the right by k positions.
#include <stdio.h>

int main() {
    int n, k, i, a[100], temp[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);
    k = k % n;
    for(i = 0; i < n; i++)
        temp[(i + k) % n] = a[i];
    for(i = 0; i < n; i++)
        a[i] = temp[i];
    printf("Array after rotation:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}

