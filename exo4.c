#include <stdio.h>
#include <string.h>
void exo4()
{
    int i;
    char c;
    //premiere boucle incrementant le nombre ligne et retournant à la ligne jusqu'à la fin du fichier
    for(i=0,puts("");c!=EOF;puts(""),i++)
        //deuxième boucle affichant la sequence d'entrée standard
        for(printf("%i.",i);((c=getchar())!='\n'&&c!=EOF);printf("%c",c));
}
