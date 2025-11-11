//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000], word[100], last[100];
    int i = 0, j = 0, wc = 0;
    fgets(s, sizeof(s), stdin);

    last[0] = '\0';

    while (1) {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\0') {
            if (j > 0) {
                word[j] = '\0';
                wc++;
                strcpy(last, word);
            }
            j = 0;
            if (s[i] == '\0') break;
        } else {
            word[j++] = s[i];
        }
        i++;
    }

    i = 0;
    j = 0;
    wc = 0;

    while (1) {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\0') {
            if (j > 0) {
                word[j] = '\0';
                wc++;
                if (strcmp(word, last) != 0)
                    printf("%c ", toupper(word[0]));
            }
            j = 0;
            if (s[i] == '\0') break;
        } else {
            word[j++] = s[i];
        }
        i++;
    }

    printf("%s\n", last);
    return 0;
}
