#include <stdio.h>
#include <string.h>
char a[1000000],b[1000000];
int main(){
    scanf("%s%s", a, b);
    for(int i=0;i<strlen(a);++i)printf("%c%c", a[i], b[i]);
}
