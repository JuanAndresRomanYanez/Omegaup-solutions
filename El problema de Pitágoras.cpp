#include <stdio.h>
#include <math.h>
int a,b,cont=0;
int main(){
    scanf("%i%i", &a, &b);
    for(int i=a;i<b;++i)for(int j=i+1;j<b;++j)if((double)sqrt(i*i+j*j)-(int)sqrt(i*i+j*j)==0.00000 && sqrt(i*i+j*j)>=a && sqrt(i*i+j*j)<=b)cont++;
    printf("%i", cont);
}
