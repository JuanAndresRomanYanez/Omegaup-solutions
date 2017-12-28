#include <stdio.h>
int test;
int solve(int n){
    int x;
    while(n--){
        scanf("%i", &x);
        int v[x][x];
        for(int i=0;i<x;++i)for(int j=0;j<x;++j)scanf("%i", &v[i][j]);
        for(int i=0;i<x;++i){
            for(int j=0;j<x;++j){
                if(v[i][j]!=v[j][i]){
                    printf("No Simétrica\n");
                    goto kok;
                }
            }
        }
        printf("Simétrica\n");
        kok:;
    }
}
int main(){
    scanf("%i", &test),solve(test);
}

