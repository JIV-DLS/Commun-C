#include <stdio.h>
void exo1()
{
    int nb;
    printf("\nVeuillez entrer votre nombre: ");
    scanf("%i",&nb);
    printf("Sa valeur absolue est %i\n",Jabs(nb));
}
int Jabs(int x)
{
    return x>0? x:-1*x;
}
