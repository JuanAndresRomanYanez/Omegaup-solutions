#include <stdio.h>
char a[1];
int cont=0;
int main(){
    while(scanf("%s", a)){
            if(a[0]=='.')break;
            if(a[0]=='A')cont++;
    }
    printf("%i", cont);
}
