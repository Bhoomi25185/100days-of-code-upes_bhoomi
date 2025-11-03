//Check if a matrix is symmetric.
#include <stdio.h>

int main() {
    int n, i, j, a[100][100], symmetric = 1;
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if(!symmetric)
            break;
    }
    if(symmetric)
        printf("Matrix is symmetric\n");
    else
        printf("Matrix is not symmetric\n");
    return 0;
}

