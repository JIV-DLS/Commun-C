
void exo1()
{
    int nbr;
    printf("Veuillez entrer un entier : ");
    scanf("%i",&nbr);
    if(nbr < 0){
         printf("La valeur absolue de %i est : %i",nbr,-nbr);
    }
    printf("La valeur absolue de %i est : %i",nbr,nbr);
}
