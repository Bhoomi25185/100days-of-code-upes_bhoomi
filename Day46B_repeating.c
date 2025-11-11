//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char s[1000];
    int freq[26] = {0};
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            if (freq[s[i] - 'a'] == 1) {
                printf("%c\n", s[i]);
                return 0;
            }
            freq[s[i] - 'a']++;
        }
    }
    printf("-1\n");
    return 0;
}
