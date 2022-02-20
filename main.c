#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[6];
    FILE *vetor;

    for(int i=0;i>=6;i++){
        vetor=fopen("C:\\Users\\anifa\\Desktop\\tpc5\\exe1","");
        fscanf(vetor,"%d",v);
        printf("%d\n",v);
        fclose(vetor);
    }



    return 0;
}
