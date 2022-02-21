#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[4],maior,menor,i,*eli,n;
    printf("maior e o menor numero do vetor\n");
    for(int i=0;i<4;++i){
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
    maior=a[0];
    menor=a[0];

    for(int i=0;i<5;i++){
        if(a[i]>maior)maior=a[i];
        if(a[i]<menor)menor=a[i];
    }
    printf("\n maior:%d\n",maior);
    printf("\n menor:%d\n",menor);


    return 0;
}
