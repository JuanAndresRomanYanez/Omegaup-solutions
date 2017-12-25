#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
long long n,a,b;
long long simplificar_fracciones(long long num, long long den){
    long long mcd=__gcd(num,den);
    num/=mcd;
    den/=mcd;
    cout<<num<<" "<<den<<"\n";
}
int main(){
    optimizar_io
    cin>>n;
    while(n--)cin>>a>>b,simplificar_fracciones(a,b);
}
