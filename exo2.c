
void exo2(){

    int i=0,nbr;
    do{
        printf("Entrer un entier positif : ");
        scanf("%i",&nbr);
        if(nbr>=0) i++;
    }while(nbr>=0);
    printf("Nombre d'entier positif saisie : %i",i);
}
