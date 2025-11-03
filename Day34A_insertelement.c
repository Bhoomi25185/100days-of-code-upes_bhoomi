//Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n, i, a[100], num, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter element to insert: ");
    scanf("%d", &num);
    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);
    for(i = n; i >= pos; i--)
        a[i] = a[i - 1];
    a[pos - 1] = num;
    n++;
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
