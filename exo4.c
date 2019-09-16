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
<<<<<<< HEAD
    }while(getchar()=! EOF);
=======
    }while(getchar()!=EOF);
>>>>>>> 19e4abd41db4c688b8ad7dafc530fea001ff7dba
}
