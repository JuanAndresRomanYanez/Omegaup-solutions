#include <stdio.h>
#include <string.h>
char a[1000000];
int main(){
    scanf("%s", a);
    for(int i=0;i<strlen(a);++i)
    if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' && a[i]!='A' && a[i]!='E' && a[i]!='I' && a[i]!='O' && a[i]!='U')printf("%c", a[i]);
}
