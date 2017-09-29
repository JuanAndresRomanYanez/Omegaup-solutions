#include <stdio.h>
long long test,d,l;
int main(){
    scanf("%lld", &test);
    while(test--)scanf("%lld%lld", &d, &l),printf(l*(l-3)/2==d?"SI\n":"NO\n");
}
