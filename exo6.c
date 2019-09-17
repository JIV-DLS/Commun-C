#include <stdio.h>
#include <string.h>

void exo6()
{

    char c;
    int letters[26]={},
    digits[10]={};

    int i;

        while((c=getchar())!=EOF)
            if(c>='a'&&c<='z'||c>='A'&&c<='Z')
            letters[c>='a'&&c<='z'? c-'a':c-'A']++;
            else if(c>='0'&&c<='9')
                digits[c-'0']++;

        puts("\n|--------------------------------------------------------------------|");

        for(i=0;i<26;i++)
            if(letters[i])
                printf("%c:\t%i fois\n",i+'a',letters[i]);
        for(i=0;i<10;i++)
            if(digits[i])
                printf("%c:\t%i fois\n",i+'0',digits[i]);

        puts("|--------------------------------------------------------------------|\n");
}
