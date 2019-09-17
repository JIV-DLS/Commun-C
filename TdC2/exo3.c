#include <stdlib.h>
#include <stdio.h>

void inserer(int *N, int *A,int VAL)
{
    int I;
 for (I=*N-1 ; (I>=0)&&(A[I]>VAL) ; I--)
       A[I+1]=A[I];

 A[I+1]=VAL;

 *N+=1;

}

int main(){
    int arr[20]={1,2,3,5,8},i;
    int n=5;

    inserer(&n,arr,4);

    puts("---------\n");

    for(i=0;i<n;i++)printf("%i\n",arr[i]);
}
