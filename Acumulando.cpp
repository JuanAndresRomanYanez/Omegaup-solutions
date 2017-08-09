#include <stdio.h>
int main() {
    int a,x,p=0,im=0,prom=0;
    scanf("%i", &a);
    for(int i=0;i<a;++i){
        scanf("%i", &x);
        prom+=x;
        if(x%2==0) {p+=x;}
        else {im+=x;}
        }
    printf("%i %i %.1f\n", p, im, (float)prom/a);
    return 0;
}
