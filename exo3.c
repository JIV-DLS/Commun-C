void exo3(){

    int i=0,nbr,sup=0,som=0;
    do{
        printf("Entrer un entier positif : ");
        scanf("%i",&nbr);
        if(nbr>=0){
            i++;
            if(nbr>sup) sup=nbr;
            som=som+nbr;
        }
    }while(nbr>=0);
    printf("Nombre d'entier positif saisie : %i\n",i);
    printf("Le maximum est : %i\n",sup);
    printf("La somme donne : %i\n",som);
}
