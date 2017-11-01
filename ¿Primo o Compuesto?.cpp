#include <stdio.h>
int n;
int p(int n){
    for(int i=2;i*i<=n;++i)if(n%i==0){printf("COMPUESTO");return 0;}
    printf("PRIMO");
}
int main(){
    scanf("%i", &n),p(n);
}
