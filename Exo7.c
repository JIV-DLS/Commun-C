#include <stdio.h>

void compteEntree(void) {
    char s[100];
    int chars = 0, lines = 0, words = 0, j;
    printf("Entrer des caracteres :\n");

    while ((s[chars++] = getchar()) != '!'); // Entrer ! pour arreter
    //Analyse des lignes
    for (j = 0; j < chars; j++) {
        if (s[j] == '\n')
            lines++;
    }

    //Analyse des mots
    for (j = 0; j < chars; j++) {
        if (s[j] != " ") {
            while (s[j++] != ' ') {
                if (s[j] == ' ')
                    words++;
            }
        }
    }
    printf("lines: %d\nwords: %d\nchars: %d\n", lines, words, chars);
}
