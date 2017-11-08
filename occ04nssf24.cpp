#include <stdio.h>
#include <string.h>
char a[1000000],b[1];
int main(){
    scanf("%s%s", a, b);
    for(int i=0;i<strlen(a);++i)if(a[i]!=b[0])printf("%c", a[i]);
}
