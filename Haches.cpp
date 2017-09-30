#include <stdio.h>
#include <string.h>
char a[100];
int cont=0;
int main(){
    scanf("%[^\n]", a);
    for(int i=0;i<strlen(a);++i)if((a[i]==' ' && (a[i+1]=='h' || a[i+1]=='H') ) || (i==0 && (a[i]=='h'|| a[i]=='H') ) )cont++;
    printf("%i haches", cont);
}
