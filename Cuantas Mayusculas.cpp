#include <stdio.h>
#include <string.h>
char a[201];
int cont=0;
int main(){
    scanf("%s", a);
    for(int i=0;i<strlen(a);++i)if(a[i]>64 && a[i]<91)cont++;
    printf("%i %i", strlen(a)-cont, cont);
}
