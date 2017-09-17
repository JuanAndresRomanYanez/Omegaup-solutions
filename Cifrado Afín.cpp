#include <stdio.h>
#include <string.h>
char cad[255];
long long a,b;
int main(){
    scanf("%lld%lld%s", &a, &b,cad);
    for(int i=0;i<strlen(cad);++i)printf("%c",  ( ( ( ( (cad[i]-65)*a)+b)%26 )%26)+65);
}
