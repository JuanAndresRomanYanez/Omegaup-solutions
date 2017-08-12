#include <stdio.h>
int main(){
    int a;
    scanf("%i", &a);
    long long v[a][a];
    for(int j=0;j<a;++j)
        for(int i=0;i<a;++i)
            scanf("%lld", &v[j][i]);
    for(int j=0;j<a;++j){
        if(j>0 && v[j-1][j-1]!=v[j][j]){
                printf("NO\n");return 0;
        }
        for(int i=0;i<a;++i){
            if(v[j][i]!=v[i][j]){
                printf("NO\n");return 0;
            }
        }
    }
    printf("SI\n");
}
