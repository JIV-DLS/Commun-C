void suppress_char(char str[], char c){
    int i=0,j;

    while(str[i]){
        if(str[i]==c)
            for(j=i;str[j];j++)
                str[j]=str[j+1];
        else i++;
    }

    };

 int main(){
     char s[]="totoooooooooooo";
     suppress_char(s,'o');
    printf("%s",s);
    return 0;
 }
