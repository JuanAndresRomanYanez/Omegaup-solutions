#include <stdio.h>
const int MAX=1000000;
bool primos[MAX+1];
void iniciar_criba(){
    primos[0]=primos[1]=true;
    for(int i=2;i<=MAX;++i)if(!primos[i])for(int j=i+i;j<=MAX;j+=i)primos[j]=true;
}
int main(){
    iniciar_criba();
    int a,cont=0;
    scanf("%i", &a);
    for(int i=1;i<=a;++i)if(primos[i]==false)cont++;
    if(cont>0)printf("%i\n", cont);
    else printf("No existen numeros primos en la cantidad ingresada.\n");
}
