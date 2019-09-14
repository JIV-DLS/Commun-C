#include <stdio.h>
#include <string.h>
void exo4()
{
    int i;
    char c;

    for(i=0;c!='0';i++)
        for(printf("%i.",i);((c=getchar())!='\n'&&c!='0'););


}
