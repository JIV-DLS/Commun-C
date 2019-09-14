#include <stdio.h>

float celsuisToFahrenheit(float Celsuis)
{
    return Celsuis*9/5 +32;
}
void exo5()
{
    float i=0;
    puts("+-------+-------+");
    for(i=0;i<=20;i+=0.5)
        printf("| %.1fC | %.1fF |\n",i,rint(celsuisToFahrenheit(i)));
    puts("+-------+-------+");
}
