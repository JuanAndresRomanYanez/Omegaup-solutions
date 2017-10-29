#include <stdio.h>
int v[7],n;
int main(){
    for(int i=0;i<7;++i)scanf("%i", &v[i]);
    scanf("%i", &n),printf("%i\n", v[n-1]*15);
    printf(v[n-1]*15>=180?"Bien hecho ;)":"Muy mal, no puedo creerlo :(");
}
