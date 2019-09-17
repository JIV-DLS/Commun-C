#include <stdio.h>
#define _ =0
void exo7()
{
    int lines,words,chars;
    char c,prec;
    puts("\n|-----------|");
        for(lines _,words =1,chars _;(c=getchar())!=EOF;prec=c,chars++)
            if(c=='\n')lines++;
            else
                if(prec==' '&&c!=' ')
                    words++;
        printf("lines: %i\nwords: %i\nchars: %i\n|-----------|\n\n",lines,words,chars);
}
