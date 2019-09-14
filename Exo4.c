#include <stdio.h>

void catNum(void) {
    int cmp = 1;
    char c;
    do {
        printf("%d ", cmp++);
        while ((c = getchar()) != '\n' && c != '0');
    } while (c != '0');
}
