#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int numcc;
    int datanasc[3];
    float altura;
    int peso;
}pessoas;
int main()
{
    int t;     //a
    pessoas p,*a;
    FILE *aux;
    //FILE*au;
    aux=fopen("pessoas.txt","r");
    t=0;
    a=(pessoas*)malloc(sizeof(pessoas));
    while(fscanf(aux,"%d %d %d %d %f %d",&(p.numcc),&(p.datanasc[0]),&(p.datanasc[1]),&(p.datanasc[2]),&(p.altura),&(p.peso))==6){
        t++;

   a=(pessoas*) realloc(a, t*size(pessoas));
   a[t-1]=p;
    }
    fclose(aux);

    aux=fopen("datas.bin","rb");
    while(fread(&p,sizeof(pessoas),1,aux)==1){
        printf("%d %d %d %d %f %d\n",p.numcc,p.datanasc[0],p.datanasc[2],p.altura,p.peso);
        fclose(aux);
    }
    return 0;
}
