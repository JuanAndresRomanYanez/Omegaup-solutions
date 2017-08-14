#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    scanf("%i%i", &a, &b);
    a=fabs(a+b);
    printf("%i", a);
    return 0;
}
