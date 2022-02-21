#include <stdio.h>
#include <stdlib.h>
typedef struct {
int Num;
int NotaFreq;
int NotaExame;
int NotaFinal;
} ALUNO;

int main()
{
    FILE*frequencia;
    void exibir(FILE *frequencia){
        if((frequencia=fopen("logger.txt","rb")))=NULL){
            exit(0);
            while(!feof(frequencia)){
                fread(&lista,sizeof(struct ficha),1,frequencia);

        }
    }
    return 0;
}
