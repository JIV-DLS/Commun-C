#include <stdio.h>

int main(){
 int i;
    char c,tmp='\0';
    int comment=0;
    for(i=0;;)
    {
       c=getchar();


       /*if(c=='*')
       {
           if(!comment)
        printf("%c",c);
           if(tmp=='/')
        {
            comment=1;continue;}}
       else if(c=='/')
       {
           if(tmp=='*'||tmp=='\0'){
           //printf("\b ",c);
            comment=0;continue;}
       }
       if(!comment)*/
       if(c=='*')if(tmp=='/'){printf("\b ");comment=1;}
       if(c=='/')if(tmp=='*'){printf("\b ");comment=0;tmp='/';continue;}
        if(!comment)
        printf("%c",c);

        if(c==EOF)break;
        tmp=c;
    }
}
