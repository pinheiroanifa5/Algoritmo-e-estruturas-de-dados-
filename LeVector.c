#include <stdio.h>
#include <stdlib.h>
void levetor(){
int vetor[3],i;
printf(" insire os elementos do vetor:\n");
for(i=0;i<3;i++){
    printf("elemento %d:\n",i+1);
    scanf("%d",&vetor[i]);
}
printf("vetor:\n");
for(i=0;i<3;i++){
    printf("%d",vetor[i]);
}
printf("%d",vetor[i]);
}

int main()
{
    levetor();
    return 0;
}
