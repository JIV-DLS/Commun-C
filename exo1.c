#include <stdio.h>
void exo1()
{
    int nb;
    printf("\nVeuillez entrer votre nombre: ");
    scanf("%i",&nb);
    printf("Sa valeur absolue est %i\n",fabs(nb));
}
double Jabs(int x)
{
    return x>0? x:-1*x;
}
