//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int n, i, j, a[100][100], distinct = 1;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }
        if(!distinct)
            break;
    }
    if(distinct)
        printf("Diagonal elements are distinct\n");
    else
        printf("Diagonal elements are not distinct\n");
    return 0;
}

