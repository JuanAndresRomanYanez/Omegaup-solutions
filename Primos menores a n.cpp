#include <stdio.h>
const int MAX=1000000;
bool primos[MAX+1];
int n;
void iniciar_criba(){
    primos[0]=primos[1]=true;
    for(int i=2;i<=MAX;++i)if(!primos[i])for(int j=i+i;j<=MAX;j+=i)primos[j]=true;
}
int solve(int n){
    int cont=0;
    for(int i=2;i<n;++i)if(!primos[i])printf("%i\n", i);
}
int main(){
    iniciar_criba();
    scanf("%i", &n),solve(n);
}

