//Check if two strings are anagrams of each other.
#include <stdio.h>

int main() {
    char a[1000], b[1000];
    int f1[256] = {0}, f2[256] = {0};
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    for (int i = 0; a[i]; i++) f1[(unsigned char)a[i]]++;
    for (int i = 0; b[i]; i++) f2[(unsigned char)b[i]]++;
    for (int i = 0; i < 256; i++) {
        if (f1[i] != f2[i]) {
            printf("Not Anagrams\n");
            return 0;
        }
    }
    printf("Anagrams\n");
    return 0;
}
