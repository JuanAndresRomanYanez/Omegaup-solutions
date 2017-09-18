#include <stdio.h>
#include <math.h>
int n,cont=0,res=0,x;
int main(){
    scanf("%i", &x);
    while(x--){
            scanf("%i", &n);
            if(n%2==0)cont+=n;
            else res+=n;
    }
    if(cont==fabs(res))printf("BALANCEADO");
    else if(cont>fabs(res))printf("POSITIVO");
    else printf("NEGATIVO");
}
