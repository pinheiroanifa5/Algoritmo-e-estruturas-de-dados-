#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    FILE *inteiro;
    FILE*intt;
    FILE *intr;

    inteiro=fopen("inteiro.txt","r");
    intt=fopen("inteiros.bin","wb");
    while(fscanf(inteiro,"%d",&n)==1)
        fwrite(&n,sizeof(int),1,intt); //a
    fclose(inteiro);
    fclose(inteiro);


    printf("inteiros:\n");
    inteiro=fopen("inteiros.bin","rb");
    while(fread(&n,sizeof(int),1,inteiro)==1)
    fwrite(&n,sizeof(int),1,inteiro);
    fclose(intt);
    fclose(inteiro);   //b


    inteiro=fopen("inteiros.bin","rb");
    intr=fopen("inteirospositivos.bin","wb");
    while(fread(&n,sizeof(int),1,inteiro)==1)
    if(n>=0){
        fwrite(&n,sizeof(int),1,intr);    //c

        printf("\n\n inteiros positivos:");
        inteiro=fopen("inteiropositivo.bin","rb");
        while(fread(&n,sizeof(int),1,inteiro)==1)
            printf("%d",n);
    }
    return 0;
}
