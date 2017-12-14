#include <stdio.h>
long long n;
bool ban=true;
int main(){
    scanf("%lld", &n);
    int v[n][n];
    for(int i=0,k=n-1;i<n;++i,k--){
        for(int j=0;j<n;++j)scanf("%lld", &v[i][j]);
        if(v[i][i]!=v[i][k])ban=false;
    }
    printf(ban==true?"Iguales\n":"No Iguales\n");
}
