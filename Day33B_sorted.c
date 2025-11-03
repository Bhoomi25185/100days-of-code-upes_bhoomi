//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int n, i, a[100], num, pos = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter element to insert: ");
    scanf("%d", &num);
    for(i = 0; i < n; i++) {
        if(a[i] > num) {
            pos = i;
            break;
        }
    }
    #include <stdio.h>

int main() {
    int n, i, a[100], num, pos = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter element to insert: ");
    scanf("%d", &num);
    for(i = 0; i < n; i++) {
        if(a[i] > num) {
            pos = i;
            break;
        }
    }
    

