#include <stdio.h>
int main(){
    int mi=1000000000,i,ma=-1000000000,k;
    int v[10];
    for(int j=0;j<10;++j){
            scanf("%i", &v[j]);
            if(v[j]<mi){
                    mi=v[j];
                    i=j;
            }
            if(v[j]>ma){
                ma=v[j];
                k=j;
            }
    }
    printf("%i %i %i\n", v[i], v[k], v[k]-v[i]);
}
