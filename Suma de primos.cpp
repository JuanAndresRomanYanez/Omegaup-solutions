#include <stdio.h>
bool primos[1000000];
int prim[78499],n,it=0;
void criba(){
    primos[0]=primos[1]=true;
    for(int i=2;i<=1000000;++i){
        if(!primos[i]){
            prim[it]=i;
            for(int j=i+i;j<=1000000;j+=i){primos[j]=true;}
            it++;
        }
    }
    prim[0]=2;
}
int main(){
    criba();
    scanf("%i", &n);
    if(!primos[n])printf("%i 0", n);
    else {
        for(int i=0;i<78498;++i){
                for(int j=i+1;j<78498;++j){
                    if(prim[i]+prim[j]==n){printf("%i %i", prim[j], prim[i]);return 0;}
                    if(prim[i]+prim[j]>n)break;
                }
                if(prim[i]>n)break;
        }
        printf("0 0");
    }
}
