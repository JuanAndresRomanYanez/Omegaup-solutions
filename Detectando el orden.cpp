#include <stdio.h>
int a,b,c;
int main(){
    scanf("%i%i%i", &a, &b, &c);
    if(a==b && a==c)printf("I");
    else if(a>=b && b>=c)printf("D");
    else if(a<=b && b<=c)printf("C");
    else printf("X");
}
