//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void rev(char *s, int l, int r) {
    while (l < r) {
        char t = s[l];
        s[l] = s[r];
        s[r] = t;
        l++;
        r--;
    }
}

int main() {
    char s[1000];
    int i = 0, start = 0;
    fgets(s, sizeof(s), stdin);
    while (1) {
        if (s[i] == ' ' || s[i] == '\0' || s[i] == '\n') {
            rev(s, start, i - 1);
            start = i + 1;
            if (s[i] == '\0') break;
        }
    }