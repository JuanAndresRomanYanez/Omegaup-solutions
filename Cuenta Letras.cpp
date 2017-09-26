#include <stdio.h>
#include <string.h>
char x[1000001];
int v[256];
int main(){
    scanf("%[^\n]", x);
    for(int i=0;i<strlen(x);++i){
        if((x[i]>64 && x[i]<91) || (x[i]>96 && x[i]<123) ){
            if(x[i]>64 && x[i]<91)x[i]+=32;
            v[x[i]]++;
        }
    }
    for(int i=97;i<123;++i)printf("%c: %i\n", i, v[i]);
}
