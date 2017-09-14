#include <stdio.h>
long long n;
int cases;
int main(){
    scanf("%i", &cases);
    while(cases--){
        scanf("%lld", &n);
        if(n%11==0)printf("El número %lld es divisible por 11\n", n);
        else printf("El número %lld no es divisible por 11\n", n);
    }
}
