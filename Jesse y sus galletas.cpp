#include <stdio.h>
#include <queue>
long long n,m,x,aux,auxi;
std::priority_queue<long long>lol;
int main(){
    scanf("%lld%lld", &n, &m);
    while(n--)scanf("%lld", &x),lol.push(-x);
    for(int i=0;;i++){
        aux=lol.top();
        if(-aux>=m){
            printf("%i", i);
            break;
        }
        lol.pop();
        if(lol.empty()){
            puts("-1");
            break;
        }
        auxi=lol.top();
        lol.pop();
        lol.push(auxi+aux*2);
    }
}

