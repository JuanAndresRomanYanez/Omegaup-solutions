#include <stdio.h>
long long n,x,cont=0,conti=0;
int main(){
    scanf("%i", &n);
    for(int i=0;i<n;++i){
        conti=0;
        scanf("%lld", &x);
        while(x>0){
            if(x%2==1)conti++;
            x/=2;
        }
        if(conti%2==1)cont++;
    }
    printf("%lld", n-cont);
}
