#include <stdio.h>
long long n,cont=0;
bool ban=true;
int main(){
    long long sum,aux;
    scanf("%lld", &n);
    if(n>2147483647)printf("-1");
    else{
        while(true){
            long long g=n,sum=0;
            while(g>0){
                sum=(sum*10)+(g%10);
                g/=10;
            }
            if(sum==n)break;
            else n+=sum;
            cont++;
            if(n>2147483647){printf("-1"); return 0;}
        }
    }
    printf("%lld %lld", n, cont);
}
