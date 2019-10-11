#include<stdio.h>
#define MAX 255
int Strstr(char a[], char b[])
{
    int i,tmp,j;
    for(i=0;a[i];i++)
    {
        tmp=i;
        for(j=0;b[j]==a[i]&&b[j];i++,j++);

        if(!b[j])return 1;

        i=tmp;
    }
    return 0;
};

int main(int argc, char *argv[]){

    int i=1,nb=0;
    char buf[MAX];
    puts("");
    if(argc>1)
    while(fgets(buf, MAX, stdin)){
        if(Strstr(buf,argv[1])){
            nb++;
            printf("ligne %i - %ie%s iteration:\t%s\n", i, nb, nb>1? "me":"re", buf);
        }
            i++;
    }



    return 0;

}
