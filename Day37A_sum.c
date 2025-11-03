//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int r, c, i, j, a[100][100], rowSum[100];
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for(i = 0; i < r; i++) {
        rowSum[i] = 0;
        for(j = 0; j < c; j++)
            rowSum[i] += a[i][j];
    }
    printf("Sum of each row:\n");
    for(i = 0; i < r; i++)
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    return 0;
}

