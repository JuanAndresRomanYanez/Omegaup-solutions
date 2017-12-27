#include <stdio.h>
int n;
int solve(int n){
    int v[n][n];
    for(int i=0;i<n;++i)for(int j=0;j<n;++j)scanf("%i", &v[i][j]);
    for(int i=0;i<n;++i){//columna
        for(int j=n-1;j>=0;--j){//fila
            printf("%i ", v[j][i]);
        }
        printf("\n");
    }
}
int main(){
    scanf("%i", &n),solve(n);
}
