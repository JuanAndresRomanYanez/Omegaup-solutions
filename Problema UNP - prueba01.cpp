#include <stdio.h>
int n,m;
int main(){
    scanf("%i%i", &n, &m),printf("%i", n+m);
}

Invierte número.cpp

#include <stdio.h>
int n;
int main(){
    scanf("%i", &n);
    while(n>0){
        printf("%i", n%10);
        n/=10;
    }
}
