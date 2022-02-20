#include <stdio.h>
#include <stdlib.h>
int potencia(int x,int n){
    int i=1,num;
    num=x;
    if(n==0){
    num=1;
    }
    while(i<n){
        num=num*x, i++;
    }


    return num;
}
int main()
{
    int base,expo,res;
    printf("digite a base:\n");
    scanf("%d",&base);
    printf("digite o expoente\n");
    scanf("%d",&expo);
    res=potencia(base,expo);
    printf("%d elevado a %d = %d",base,expo,res);

     return 0;
}
