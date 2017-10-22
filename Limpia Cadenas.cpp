#include <stdio.h>
#include <string.h>
char a[1001];
int main(){
    scanf("%[^\n]", a);
    for(int i=0;i<strlen(a);++i)if(a[i]>64 && a[i]<91 || a[i]>96 && a[i]<123 || a[i]==' ')printf("%c", a[i]);
}
