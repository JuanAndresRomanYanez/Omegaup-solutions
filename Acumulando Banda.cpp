#include <stdio.h>
int main(){
    int v[5];
    int x,sum=0;
    for(int i=0;i<5;++i){
            scanf("%i", &x);
            sum+=x;
            v[i]=sum;
    }
    scanf("%i", &x);
    printf("%i\n", v[x-1]);
}
