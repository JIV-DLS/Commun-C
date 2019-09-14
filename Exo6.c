#include <stdio.h>
#include <string.h>

void comptage(void) {
    char s[] = "abc 123 cba xy 42";
    int i, n[66] = {0};

    for (i = 0; i < strlen(s); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            n[s[i] - 'A']++;
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            n[s[i] - 70]++;
        } else {
            n[s[i] + 12]++;
        }
    }

    for (i = 0; i < 66; i++) {
        if (n[i] > 0) {
            printf("%i----", n[i]);
            if (i >= 0 && i <= 26) {
                printf("%c\n", i + 'A');
            } else if (i >= 27 && i <= 52 && i + 'a' - 27 != 114)
                printf("%c\n", i + 'a' - 27);
            else
                printf("%c\n", i + '0' - 60);
        }
    }
}

int aOccurence(char tab[], char a) {
    int i, nbr = 0;

    for (i = 0; i < strlen(tab); i++) {
        if (a == tab[i])
            nbr++;
    }
    return nbr;
}

void occurenceDelete(char tab[], char a) {
    int i, j;
    for (i = 0; i < strlen(tab); i++) {
        if (a == tab[i]) {
            for (j = i + 1; j < strlen(tab); j++) {
                if (a == tab[j])
                    tab[j] = ' ';
            }
        }
    }
}

void comptage2() {
    char s[] = "abc 123 cba xy 42";

    int i, j;
    for (i = 0; i < strlen(s); i++) {
        if (s[i] != ' ')
            printf("Nombre d'occurence de %c : %d\n", s[i], aOccurence(s, s[i]));
        if (s[i] != ' ' && aOccurence(s, s[i]) > 1)
            occurenceDelete(s, s[i]);
    }
}
