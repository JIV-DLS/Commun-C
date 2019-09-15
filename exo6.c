#include <stdio.h>
#include <string.h>

void exo6()
{

    char car[256]={0},c;
    int i;
        while((c=getchar())!=EOF)
        car[c]++;

        puts("\n|--------------------------------------------------------------------|");
        for(i=0;i<256;i++)
            if(car[i]!=0)
                printf("%c:\t%i fois\n",i,car[i]);
        puts("|--------------------------------------------------------------------|\n");
}
