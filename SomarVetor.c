#include <stdio.h>
#include <stdlib.h>
int somavetor(int v[],int n[]){
    int i;
    int soma;
    for(i=1;i<=n;i++){
        soma=soma+v[i];
    }
    return soma ;
}
int main()
{
    int soma=0;
    int i,num[5];
    for(i=1;i<=5;i++){
        printf("\n introduza o valore\n",i);
        scanf("%d",&num[i]);
    }
    soma=somavetor(num,5);
    printf("\n a soma do vetor e:%d",soma);
    num=realloc(num[i],10*sizeof(int ));
    return 0;
}
