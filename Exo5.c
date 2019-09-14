#include <stdio.h>
#include <windows.h>

float retFareinheit(float celcius) {
    return celcius * (9 / 5) + 32;
}

void afficheTabDegree(void) {
    int i;
    float deg = 0.0;

    printf("+------+------+\n");
    for (i = 0; i < 41; i++, deg += 0.5)
        printf("| %.1fC | %.1fF |\n", deg, retFareinheit(deg));
    printf("+------+------+\n");
}

