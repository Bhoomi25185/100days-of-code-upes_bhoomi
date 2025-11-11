//Q91: Remove all vowels from a string.
#include <stdio.h>
#include <ctype.h>

int isVowel(char c) {
    c = tolower(c);
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}

int main() {
    char s[1000], r[1000];
    int i, j = 0;
    fgets(s, sizeof(s), stdin);
    for(i = 0; s[i]; i++) {
        if(!isVowel(s[i]))
            r[j++] = s[i];
    }
    r[j] = '\0';
    printf("%s", r);
    return 0;
}
