#include <stdio.h>

void max(void) {
    int val = 0, cmp = 0, max = 0;

    while (val >= 0) {
        printf("Entrer un entier : ");
        scanf("%d", &val);
        cmp++;

        if (val > max)
            max = val;
    }
    printf("Le maximum des %d nombres saisis est %d\n", cmp, max);
}
