#include <stdio.h>
int main()
{
    float a,b;
    scanf("%f%f", &a, &b);
    if(a==b) {printf("Cabal Casero\n");}
    if(a>b) {printf("Faltan ");printf("%.2f", a-b);printf(" Bs.\n");}
    if(a<b) {printf("Hay ");printf("%.2f", b-a);printf(" Bs. de cambio\n");}
    return 0;
}
