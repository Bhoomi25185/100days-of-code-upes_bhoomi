//Q95: Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int main() {
    char a[1000], b[1000], c[2000];
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    a[strcspn(a, "\n")] = 0;
    b[strcspn(b, "\n")] = 0;
    if (strlen(a) != strlen(b)) {
        printf("No\n");
        return 0;
    }
    strcpy(c, a);
    strcat(c, a);
    if (strstr(c, b)) printf("Yes\n");
    else printf("No\n");
    return 0;
}
