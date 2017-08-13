#include <stdio.h>
const int MAX=1000000;
bool primos[MAX+1];
void iniciar_criba(){
    primos[0]=primos[1]=true;
    for(int i=2;i<=MAX;++i)if(!primos[i])for(int j=i+i;j<=MAX;j+=i)primos[j]=true;
}
int main(){
    iniciar_criba();
    int a;
    scanf("%i", &a);
    for(int i=1;i<=a;++i){
        printf("%i ", primos[i-1]);
        if(i%10==0)printf("\n");
    }
}
