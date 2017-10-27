#include <stdio.h>
#include <string.h>
char a[1000000];
int main(){
    scanf("%[^\n]", a);
    for(int i=strlen(a)-1;i>=0;--i)printf("%c", a[i]);
}
