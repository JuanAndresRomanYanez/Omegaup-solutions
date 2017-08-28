#include <stdio.h>
int a,b,c,d,e,f;
int main(){
    scanf("%i%i%i%i%i%i", &a, &b, &c, &d, &e, &f);
    printf(a==d && b==e && c==f?"Iguales":(c>f?"Segunda":(c<f?"Primera\n": b>e?"Segunda":(b<e?"Primera\n":(a>d?"Segunda\n":"Primera\n") ) ) ) );
}
