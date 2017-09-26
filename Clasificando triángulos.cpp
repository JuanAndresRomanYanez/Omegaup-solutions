#include <stdio.h>
int a,b,c;
int main(){
    scanf("%i%i%i", &a, &b, &c);
    if(a==90 || b==90 || c==90)printf("RECTANGULO");
    else if(a==b && a==c)printf("EQUILATERO");
    else if(a==b || a==c || b==c)printf("ISOSCELES");
    else printf("ESCALENO");
}
