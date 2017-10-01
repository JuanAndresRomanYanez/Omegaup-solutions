#include <stdio.h>
#include <string.h>
char p[100];
int main(){
    scanf("%s", p);
    for(int i=0;i<strlen(p);++i)if(p[i]>64 && p[i]<92)printf("%c", p[i]);
}
