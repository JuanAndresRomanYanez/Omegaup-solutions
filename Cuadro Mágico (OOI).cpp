#include <stdio.h>
#include <algorithm>
int d1=0,d2=0,tam,it,fi,co;
int f[11];
int col[11];
int main(){
    scanf("%i", &tam);
    it=tam;
    int v[tam][tam];
    for(int i=0;i<tam;++i){
            it--;
            for(int j=0;j<tam;++j){
                scanf("%i", &v[i][j]);
                f[i]+=v[i][j];
                col[j]+=v[i][j];
                if(it==j)d2+=v[i][j];
                if(i==j)d1+=v[i][j];
            }
    }
    fi=f[0],co=col[0];
    for(int i=0;i<tam;++i)if(f[i]!=fi || col[i]!=co){printf("NO");return 0;}
    if(d1==d2)printf("SI");
    else printf("NO");
}
