#include <stdio.h>
#include <stdlib.h>
 int vetor(int a){
     int i,n;
     printf("entre com a quantidade de numeros do vetor:");
     scanf("%d",&n);
     a=malloc(n*sizeof(int));
     printf("insire os numeros:");
     for(i=0;i<n;i++){
        scanf("%d",&a);
     }
     free(a);
     return(n);
 }
 int maior(int*c,int s){
     if(s==1)
        return(c[0]);
     else{
        int x;
        x=maior(c,s-1);
        printf("%d",x);

        if(x>c[s-1])
            return(x);
        else return(c[s-1]);
     }
 }
int main()
{
    int j;
    int *vet;
    j=vetor(vet);
    printf("maior=%d",maior(vetor,j));

    return 0;
}
