#include <stdio.h>
int main(){
    int a,b;
    scanf("%i%i", &a, &b);
    int v[a][b];
    for(int j=0;j<a;++j){
        for(int i=0;i<b;++i){
            scanf("%i", &v[j][i]);
        }
    }
    for(int j=0;j<a;++j){
        for(int i=b-1;i>=0;--i){
            printf("%i ", v[j][i]);
        }
        printf("\n");
    }
}
