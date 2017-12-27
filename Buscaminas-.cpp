#include <stdio.h>
int n,m;
int solve(int n, int m){
    int cont=0;
    bool v[n][m];
    for(int i=0;i<n;++i)for(int j=0;j<m;++j)scanf("%i", &v[i][j]);
    for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                cont=0;
                if(v[i][j]==true)cont=9;
                else{
                    //arriba
                    if(i>0){
                        if(j>0 && v[i-1][j-1]==true)cont++;
                        if(v[i-1][j]==true)cont++;
                        if(j+1<m && v[i-1][j+1]==true)cont++;
                    }
                    //izquierda
                    if(j>0 && v[i][j-1]==true)cont++;
                    //derecha
                    if(j+1<m &&v[i][j+1]==true)cont++;
                    //abajo
                    if(i+1<n){
                        if(j>0 && v[i+1][j-1]==true)cont++;
                        if(v[i+1][j]==true)cont++;
                        if(j+1<m && v[i+1][j+1]==true)cont++;
                    }
                }
                printf("%i ", cont);
            }
        printf("\n");
    }
}
int main(){
    scanf("%i%i", &n, &m),solve(n,m);
}
