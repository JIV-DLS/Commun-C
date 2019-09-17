#include <stdio.h>

int main()
{
    int i;
    char ch[16],c;
    ch[16]='\0';
    for(i=0;;i++)
    {
       c=getchar();
        printf("%x ",c);

        ch[i]= (c>=' '&&c<='~')? c:'.';


        if(i==15||c==EOF)
        {
            ch[i+1]='\0';
            i=0;

            printf("|%s\n",ch);
            strcpy(ch," ");
            if(c==EOF)break;
        }
    }
}
