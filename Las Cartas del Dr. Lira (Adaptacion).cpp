#include <stdio.h>
int n,cost1=0,x;
int main(){
    scanf("%d", &n);
    for(int i=0;i<n;i++){
            scanf("%i", &x);
            cost1+=(x==1)==i%2;
    }
    printf("%i", (cost1<n-cost1?cost1:n-cost1) );
}
