#include <stdio.h>
#include <string.h>
char a[101];
bool ban=false;
int main(){
    scanf("%s", a);
    for(int i=0;i<strlen(a)-1;++i)if(a[i]=='1' && a[i+1]=='3'){ban=true;break;}
    printf("%s", a);
    printf(ban==true?" es de Mala Suerte":" NO es de Mala Suerte");
}
