#include <stdio.h>
int main(){
    int n,m,cont;
    scanf("%i%i", &n, &m);
    bool v[n][m];
    for(int i=0;i<n;++i)for(int j=0;j<m;++j)scanf("%i", &v[i][j]);
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cont=0;
            if(v[i][j]==true)cont++;
            if(j+1<m){
                    if(v[i][j+1]==true)cont++;
                    if(i+1<n && v[i+1][j+1]==true)cont++;
            }
            if(i+1<n && v[i+1][j]==true)cont++;
            if(j>0){
                if(v[i][j-1]==true)cont++;
                if(i+1<n && v[i+1][j-1]==true)cont++;
            }
            if(i>0){
                if(v[i-1][j]==true)cont++;
                if(j>0 && v[i-1][j-1]==true)cont++;
                if(j+1<m && v[i-1][j+1]==true)cont++;
            }
            printf("%i ", cont);
        }
        printf("\n");
    }
}
