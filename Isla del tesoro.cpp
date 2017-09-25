#include <stdio.h>
#include <string.h>
char s[1000000];
int cont=0;
int main(){
    scanf("%s", s);
    for(int i=0;i<strlen(s);++i)if(s[i]=='B')cont++;
    if(cont%2!=0)printf("S");
    else printf("N");
}
