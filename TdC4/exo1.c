#ifndef EXO1_C_INCLUDED
#define EXO1_C_INCLUDED



#endif // EXO1_C_INCLUDED
int pow(int x,int e){
    int i=1;
    int result=x;
    while(i<e){
        result*=x;
        i++;
    }
    return result;
}
int unite(int number,int puissBassPrec){
    return number>10? number/puissBassPrec:number;
}
void print(int nombre){
    printB(nombre,10);
}
char convert(int x){
    return x>=10? x-10+'A':x+'0';
}
void printB(int nombre,int base){
    /*
        if(nombre>=base){
        printB(nombre/10);
        }
        putchar(convert(nombre%base));
        ===========
        if(n>=2)
        enbinaire(n>>1);
        putchar((n&1)? '1':'0')
    */
    int i=0;
    if(nombre<0){
        putchar('-');
        nombre=-nombre;
    }

    char numbers[10];

    int tmp;
    do
    {
        numbers[i++]=convert(nombre%base);
        nombre/=base;
    }while(nombre);
    for(i=i-1;i>=0;i--)putchar(numbers[i]);
}

int main(){
printB(125,2);
}
