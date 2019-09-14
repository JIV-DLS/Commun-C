#include <stdio.h>

void exo3()
{
    int i,nb=0,max=0,somme=0;
    for(i=0;nb>=0;i++,somme=nb>0?somme+nb:somme)
    {
        printf("Entrer un entier: ");
        scanf("%i",&nb);
        max=max>nb? max:nb;
    }
        printf("Le maximum des %i nombres saisis est %i. La somme est: %i",i,max,somme);
}
