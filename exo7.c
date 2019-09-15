#include <stdio.h>
#define _ =0
void exo7()
{
    int i,lines,words,chars;
    char c;
    puts("\n|-----------|");
        for(lines _,words _,chars _;(c=getchar())!=EOF;chars++)
            switch(c)
            {
                case '\n':lines++;break;
                case ' ':words++;break;
            }
        printf("lines: %i\nwords: %i\nchars: %i\n|-----------|\n\n",lines,words,chars);
}
