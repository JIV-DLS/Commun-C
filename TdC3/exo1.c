#include <stdio.h>

int indice(const char str[], const char c){
    int i;

    for(i=0;str[i]!='\0';i++)
        if(str[i]==c)return i;

    return -1;
}
int indice_droite(const char str[], const char c){
    int i;

    for(i=strlen(str);i>=0;i--)
        if(str[i]==c)return i;
    return -1;
}
int main(){

}
