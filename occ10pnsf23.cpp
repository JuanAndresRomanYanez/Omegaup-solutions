#include <stdio.h>
#include <math.h>
int n;
int main(){
    scanf("%i", &n);
    if((double)sqrt(n)-(int)sqrt(n)==0)printf("SI %i", (int)sqrt(n));
    else printf("NO\n");
}
