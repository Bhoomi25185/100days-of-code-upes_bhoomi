//Q94: Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], word[1000], longest[1000];
    int i = 0, j = 0, max = 0;
    fgets(s, sizeof(s), stdin);
    while (1) {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\0') {
            word[j] = '\0';
            if (j > max) {
                max = j;
                strcpy(longest, word);
            }
            j = 0;
            if (s[i] == '\0') break;
        } else {
            word[j++] = s[i];
        }
        i++;
    }
    printf("%s\n", longest);
    return 0;
}
