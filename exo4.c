#include <stdio.h>
#include <string.h>
void exo4()
{
    int i;
    char c;
    //premiere boucle incrementant le nombre ligne et retournant � la ligne jusqu'� la fin du fichier
    for(i=0,puts("");c!=EOF;puts(""),i++)
        //deuxi�me boucle affichant la sequence d'entr�e standard
        for(printf("%i.",i);((c=getchar())!='\n'&&c!=EOF);printf("%c",c));
}
