#include <stdio.h>
int n,m,x,sum;
int solve(int n, int m){
        while(n--){
        sum=0;
        for(int i=0;i<m;++i)scanf("%i", &x),sum+=x;
        printf("%i\n", sum);
    }
}
int main(){
    scanf("%i%i", &n, &m),solve(n,m);
}
