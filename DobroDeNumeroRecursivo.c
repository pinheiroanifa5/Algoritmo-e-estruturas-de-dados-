#include <stdio.h>
#include <stdlib.h>

 int digitos(int a){
     int contar;
     if(a>=10){
        a=a/10;
        contar=contar+digitos(a);
     }
 }
int main()
{
    int n,cont;
    printf("digite um numero inteiro:");
    scanf("%d",&n);
    cont=digitos(n);
    printf("resultados:%d",cont);
    return 0;
}
