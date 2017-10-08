#include <stdio.h>
int a,b;
int main(){
    scanf("%i%i", &a, &b);
    if(a>b){
        if(a%b==0)printf("%i", a/b);
        else printf("%i %i/%i", a/b,a%b,b);
    }
    else printf("%i/%i", a, b);
}
