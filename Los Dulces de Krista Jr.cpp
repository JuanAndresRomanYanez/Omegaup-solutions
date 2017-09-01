#include <stdio.h>
int n,k,res,ma=0;
int main(){
    scanf("%i%i", &n, &k);
    int v[n];
    for(int i=0;i<n;++i)scanf("%i", &v[i]);
    for(int i=0;i<n-k+1;++i){
        res=v[i];
        for(int j=1;j<k;++j){
            res+=v[i+j];
        }
        ma=res>ma?res:ma;
    }
    printf("%i", ma);
}
