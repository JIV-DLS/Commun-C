#include <stdio.h>
#include <string.h>
int compare (const void * a, const void * b)
{
  return ( *(char*)a - *(char*)b );
}
int notFound(char chaine[],char c)
{
    int i;
    for(i=0;i<strlen(chaine);i++)
    if(c==chaine[i])return 0;
    return 1;
}

void exo6()
{
    char chaine[200]="abc 123 cba xy 42",found[200];
    int i,j;
    //ranger la chaine de caractère dans le bon ordre
    //qsort(chaine,strlen(chaine),sizeof(char),compare);
    for(i=0,j=0;i<strlen(chaine);i++)
    {

        if(notFound(found,chaine[i]))
        {
            found[j]=chaine[i];
            j++;

            int k,l;

            for(k=0,l=0;k<strlen(chaine);k++)
            if(chaine[k]==chaine[i])l++;

            printf("%c:  %i fois\n",chaine[i],l);
        }
    }
}
