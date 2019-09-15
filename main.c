#include <stdio.h>
extern void exo1();
extern void exo2();
extern void exo3();
extern void exo4();
extern void exo5();
extern void exo6();
extern void exo7();
extern void exo8();
static int test()
{
    static int n=0;
    n++;
    return n;
}
int main()
{
    exo4();
    return 0;
    int n;
    while((n=test())<100)printf("%i\n",n);
    //exo1();

    /*while(1)
    {
        printf(".");
        printf("\b ..");
        printf("\b\b  ...");
        printf("\b\b\b   ");
        printf(". \n");
    };*/
    char c;
    while(c!=27)
    {
        printf(".\b ");
        printf("..\b\b  ");
        printf("...\b\b\b   ");
        if(kbhit())
        printf("%c %s",(c=getch()),c!=27?"\n":"Au revoir et a bientot.\n");
    };
    return 0;
}
