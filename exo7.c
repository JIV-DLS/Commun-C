#include <stdio.h>

void exo7()
{
    int i,lines,words,chars;
    char c;

        for(lines=0,words=0,chars=0;(c=getchar())!=EOF;chars++)
        {
            //printf("%i",c);
            switch(c)
            {
                case '\n':lines++;
                case ' ':words++;
            }


        };
        printf("lines: %i\nwords: %i\nchars: %i\n\n|-----------|\n\n",lines,words,chars);

}
