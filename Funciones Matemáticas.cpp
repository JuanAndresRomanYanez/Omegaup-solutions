#include <stdio.h>
#include <math.h>
using namespace std;
int test,x;
int solve(int n){
    long long z,y;
    if(n==1){
        scanf("%lld", &z);
        if(z<0)z*=-1;
        printf("%lld\n", z);
    }
    if(n==2){
        scanf("%lld%lld", &z, &y);
        z=z>y?z:y;
        printf("%lld\n", z);
    }
    if(n==3){
        scanf("%lld%lld", &z, &y);
        z=z<y?z:y;
        printf("%lld\n", z);
    }
    if(n==4){
        scanf("%lld", &z);
        printf("%.2lf\n", sqrt(z));
    }
    if(n==5){
        scanf("%lld%lld", &z, &y);
        z=pow(z,y);
        printf("%lld\n", z);
    }
}
int main(){
    scanf("%i", &test);
    while(test--)scanf("%i", &x),solve(x);
}
