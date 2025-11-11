//Print the initials of a name.
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    int i = 0;
    fgets(s, sizeof(s), stdin);
    if (s[0] != ' ' && s[0] != '\n')
        printf("%c", toupper(s[0]));
    while (s[i]) {
        if (s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\n')
            printf("%c", toupper(s[i+1]));
        i++;
    }
    return 0;
}
