#include <stdio.h>
#include <stdlib.h>

void exo4()
{
    int i=1;
    char c="";
    printf("%i. ",i);
    do{
       c=getchar();
        if(c=='\n'){
        i++;
        printf("%i. ",i);
       }
        printf("%c",c);
    }while(c!=EOF);
}
