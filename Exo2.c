#include <stdio.h>

void valPos(void) {
    int cmp = 0;
    int val;
    do {
        puts("Entrer un entier :");
        scanf("%d", &val);
        cmp++;
    } while (val > 0);

    printf("Nombre d'entier absolu : %d\n", cmp);
}
