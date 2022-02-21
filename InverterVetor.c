#include <stdio.h>
#include <stdlib.h>
void inverte(int vetor1[],int posicao){
    int aux,tamvet=posicao-1;
    for(posicao=0;posicao<=tamvet;posicao++){
        aux=vetor1[posicao];
        vetor1[posicao]=vetor1[tamvet];
        vetor1[tamvet]=aux;
        tamvet--;
    }
}
int main()
{
    int vetor1[6],posi,tam;
    for(posi=0;posi<5;posi++){
        printf("introduza o valore (um por um):\n");
        scanf("%d",&vetor1[posi]);
    }
printf("\n\n");
   inverte(vetor1,posi);
   tam=posi;
   for(posi=0;posi<tam;posi++){
    printf(" %d",vetor1[posi]);
   }
printf(" -1\n");
    return 0;
}
