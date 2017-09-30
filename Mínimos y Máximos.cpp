#include <stdio.h>
int n,x,mi=2147483647,ma=-2147483648,v[1000001];
int main(){
    scanf("%i", &n);
    while(n--){
        scanf("%i", &x);
        v[x]++;
        mi=x<mi?x:mi;
        ma=x>ma?x:ma;
    }
    printf("%i %i", mi,v[ma]);
}
