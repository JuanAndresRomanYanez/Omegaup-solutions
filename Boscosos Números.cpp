#include <stdio.h>
#include <string.h>
char n[10000];
int cont=0;
int main(){
    scanf("%s", n);
    for(int i=0;i<strlen(n);++i)if(n[i]=='0' || n[i]=='2' || n[i]=='4' || n[i]=='6' || n[i]=='8')cont++;
    printf(cont&1?"CHAFA":"CHIDO");
}
