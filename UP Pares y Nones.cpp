#include <stdio.h>
int n,x,conti=0;
int main(){
    scanf("%i", &n);
    for(int i=0;i<n;++i){
        scanf("%i", &x);
        if(x&1)conti++;
    }
    printf("%i %i", n-conti, conti);
}
