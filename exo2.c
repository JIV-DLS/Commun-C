#include <stdio.h>
void exo2()
{
    int i,nb=0;
    puts("entrer un entier negatifs pour arreter la saisie: ");
    for(i=0;nb>=0;i++)
    {
        printf("Entrer un entier: ");
        scanf("%d",&nb);
    }
        printf("Nombre d'entier saisis: %i\n",i);
}
