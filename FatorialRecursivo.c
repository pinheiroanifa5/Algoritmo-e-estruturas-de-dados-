#include <stdio.h>
#include <stdlib.h>
int Fat(int x){
    int f=1,i;
    for(i=x;i>0;i--){
        f=f*i;
    }
    return f;
}
int main()
{
    int n,fat;
    do{
        printf("digite um numero:");
        scanf("%d",&n);
    }
    while(n<0);
    fat=Fat(n);
    printf("fatorial de n=%d\n",fat);
    printf("fatoria de n+4=%d\n",Fat(n+4));

    return 0;
}
