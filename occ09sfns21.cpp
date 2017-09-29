#include <stdio.h>
#include <string.h>
char a[1000000],b[1000000];
int n;
int main(){
    scanf("%s%s%i", a,b,&n);
    for(int i=0;i<strlen(a);++i){
            if(n==1)printf("%c%c", a[i],b[i]);
            else printf("%c%c", b[i],a[i]);
    }
}
