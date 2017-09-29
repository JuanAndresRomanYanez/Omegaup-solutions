#include <stdio.h>
int n;
int main(){
    scanf("%i", &n),printf(n==12?"1 docena de manzanas.":"%i docenas de manzanas.", n/12);
}
