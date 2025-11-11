//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

int main() {
    char s[20], d[3], m[3], y[5];
    scanf("%[^/]/%[^/]/%s", d, m, y);
    char month[10];
    if (!strcmp(m, "01")) strcpy(month, "Jan");
    else if (!strcmp(m, "02")) strcpy(month, "Feb");
    else if (!strcmp(m, "03")) strcpy(month, "Mar");
    else if (!strcmp(m, "04")) strcpy(month, "Apr");
    else if (!strcmp(m, "05")) strcpy(month, "May");
    else if (!strcmp(m, "06")) strcpy(month, "Jun");
    else if (!strcmp(m, "07")) strcpy(month, "Jul");
    else if (!strcmp(m, "08")) strcpy(month, "Aug");
    else if (!strcmp(m, "09")) strcpy(month, "Sep");
    else if (!strcmp(m, "10")) strcpy(month, "Oct");
    else if (!strcmp(m, "11")) strcpy(month, "Nov");
    else strcpy(month, "Dec");

    printf("%s-%s-%s\n", d, month, y);
    return 0;
}
