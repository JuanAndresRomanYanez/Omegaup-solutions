#include <stdio.h>
long long n;
int main(){
    while(scanf("%lld", &n)!=EOF){
        if(n!=0){
            while(n>0){
                printf("%i", n%10);
                n/=10;
            }
        }
        else printf("0");
        printf("\n");
    }
}
