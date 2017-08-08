#include <stdio.h>
int main(){
    int a;
    bool ban=false;
    scanf("%i", &a);
    int v[a][a];
    for(int j=0;j<a;++j){
        for(int i=0;i<a;++i){
        scanf("%i", &v[j][i]);
        }
        if(j>0 && v[j-1][j-1]!=v[j][j])ban=true;
    }
    printf(ban==true?"NO\n":"SI\n");
}
