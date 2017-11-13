#include <stdio.h>
#include <math.h>
long long n,year=2018;
long long solve(long long n){
    long long i=0;
    for(;n-pow(2,i)>=0;i++)year++;
    printf("%lld", year);
}
int main(){
    scanf("%lld", &n),solve(n);
}
