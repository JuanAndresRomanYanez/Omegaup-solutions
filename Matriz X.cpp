#include <stdio.h>
int main(){
    int f,c;
    scanf("%i%i", &f,&c);
    int v[f][c];
    for(int j=0;j<f;++j){
        for(int i=0;i<c;++i){
            scanf("%i", &v[j][i]);
        }
    }
    for(int i=f-1;i>=0;--i){
        if(i%2==0){
            for(int j=0;j<c;++j){
                if(j%2==0)printf("%i ", v[i][j]);
            }
        }
    }
    printf("\n");
}
