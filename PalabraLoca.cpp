#include <stdio.h>
#include <string.h>
char b[1000000];
long long cont;
int main(){
        scanf("%lld%s", &cont,b);
        for(int i=0;i<strlen(b);++i){
            if(b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u')cont+=100;
            else if(b[i]>=98 && b[i]<=109)cont/=2;
            else if(b[i]!='x')cont-=10;
            else break;
        }
        printf("%lld\n", cont);
}
