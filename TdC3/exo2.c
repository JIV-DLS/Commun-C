#include <stdio.h>

int palindrome(const char str[]){
    int i;
    int taille=strlen(str);

    for(i=0;i<taille;i++)
        if(str[i]!=str[taille-i-1])return 0;
    return 1;
};

int main(){
    printf("%i",palindrome("kayak"));
}
