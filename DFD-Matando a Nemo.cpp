#include <stdio.h>
int n,cont=0,x;
int main(){
    scanf("%i", &n);
    while(scanf("%i", &x)!=EOF){
        n+=x;
        cont++;
        if(n<=0){printf("%i\n%i\n", cont, n);return 0;}
    }
}
