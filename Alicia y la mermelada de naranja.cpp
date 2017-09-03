#include <stdio.h>
int a,b,c,x,cont=0;
int main(){
    scanf("%i", &a);
    while(a--){
        scanf("%i%i", &b, &c);
        x=b>c?b:c;
        cont+=x;
    }
    printf("%i", cont);
}
