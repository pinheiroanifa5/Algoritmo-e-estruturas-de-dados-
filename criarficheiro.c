#include <stdio.h>
#include <stdlib.h>



int main()
{
FILE *arq;
int result;
char str[50];

arq=fopen("arqGrav.dat","wb");
if(arq==0){
    printf("problemas na abertura do arquivo\n");
    return;
}

    return 0;
}
