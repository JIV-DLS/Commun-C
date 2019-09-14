#include <stdio.h>
#include <string.h>

void exo6()
{

    char car[256]={0},c;
    int i;
        while((c=getchar())!=EOF)
        car[c]++;

        puts("|---------------------------------|");
        for(i=0;i<256;i++)
            if(car[i]!=0)
                printf("%c |-------> %i\n",i,car[i]);
        puts("|---------------------------------|");
}
