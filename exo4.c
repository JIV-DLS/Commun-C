#include <stdio.h>
#include <stdlib.h>

void exo4()
{
    int i=0;
    do{
       i++;
       printf(getchar());
       if(getchar()=='\n'){
        printf(getchar());
        printf("%i. ",i);
       }
    }while(getchar()=! EOF);
}
