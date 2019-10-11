void strcpy(char s1[], char s2[]){
    int i;
    int taille_s2=strlen(s2);

    if(taille_s2<=strlen(s1))
    for(i=0;i<taille_s2;i++)s1[i]=s2[i];


};
int  strcmp(char s1[], char s2[]){
    int i;

    for(i=0;s1[i]==s2[i]&&s1[i]!='\0';i++);

    return s1[i]-s2[i];
};
void strupper(char s[]){
    int i;

    for(i=0;s[i];i++)
        if(s[i]>='a'&&s[i]<='z')
            s[i]=s[i]-'a'+'A';

};

int main()
{
    char s1[]="toto",s2[]="tataa";

    strcpy(s1,s2);

    printf("La premiere chaine devient: %s\n",s1);

    int cmp;

    printf("%s\n",
           cmp=(strcmp(s1,s2)>0)? "Premiere chaine superieure a la seconde"
           :cmp<0? "Première chaine inferieure a la seconde"
           : "Les deux chaines sont egales"
           );

    strupper(s1);
    printf("En majuscule cette chaine donne: %s\n",s1);
    return 0;
}
