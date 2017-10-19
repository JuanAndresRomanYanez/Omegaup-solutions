#include <stdio.h>
#include <string.h>
char a[1001];
int cont=0;
int main(){
    scanf("%s", a);
    for(int i=0;i<strlen(a);++i)cont=a[i]>64 && a[i]<91?cont+(a[i]-64):cont+((a[i]-96)*-1);
    printf("%i", cont);
}
